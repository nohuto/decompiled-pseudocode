/*
 * XREFs of ?LoadModuleWorkHorse@@YGPAXPAGH@Z @ 0x1E888C
 * Callers:
 *     _EngLoadModule@4 @ 0x1E9081 (_EngLoadModule@4.c)
 *     _EngLoadModuleForWrite@8 @ 0x1E9099 (_EngLoadModuleForWrite@8.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x8A554 (-StringCchCopyW@@YGJPAGIPBG@Z.c)
 *     ?GetModuleHandleAndIncrementRefcount@@YGPAXPBG@Z @ 0x1E8814 (-GetModuleHandleAndIncrementRefcount@@YGPAXPBG@Z.c)
 *     _bMapFile@16 @ 0x1E9421 (_bMapFile@16.c)
 *     _MakeSystemRelativePath@12 @ 0x2495C3 (_MakeSystemRelativePath@12.c)
 */

struct _LIST_ENTRY *__fastcall LoadModuleWorkHorse(const unsigned __int16 *a1, int a2)
{
  const unsigned __int16 *v3; // esi
  struct _LIST_ENTRY *v4; // edi
  const unsigned __int16 *v5; // ecx
  __int16 v6; // ax
  struct _LIST_ENTRY *result; // eax
  unsigned int v8; // esi
  PATHOBJ *v9; // eax
  PATHOBJ *v10; // ebx
  struct _LIST_ENTRY *v11; // esi
  struct _LIST_ENTRY *v12; // eax
  struct _LIST_ENTRY *Blink; // ecx
  int v14; // [esp-4h] [ebp-24h]
  unsigned int v15; // [esp+0h] [ebp-20h]
  const unsigned __int16 *v16; // [esp+4h] [ebp-1Ch]
  struct _UNICODE_STRING Destination; // [esp+Ch] [ebp-14h] BYREF
  const unsigned __int16 *v18; // [esp+14h] [ebp-Ch]
  unsigned int v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h]

  v20 = a2;
  v18 = a1;
  v3 = a1;
  v19 = 0;
  *(_DWORD *)&Destination.Length = 0;
  v4 = 0;
  Destination.Buffer = 0;
  v5 = a1 + 1;
  do
    v6 = *v3++;
  while ( v6 != (_WORD)v19 );
  if ( !(v3 - v5) )
    return 0;
  if ( a2 || (result = (struct _LIST_ENTRY *)GetModuleHandleAndIncrementRefcount(), (v4 = result) == 0) )
  {
    v14 = wcslen(a1);
    v8 = (2 * v14 + 9) & 0xFFFFFFF8;
    v19 = v8;
    if ( MakeSystemRelativePath(a1, &Destination, v14) )
    {
      v9 = (PATHOBJ *)PALLOCMEM2(v8 + 64, 1818846791, 1);
      v10 = v9;
      if ( v9 )
      {
        v11 = (struct _LIST_ENTRY *)((char *)v9 + v8);
        if ( bMapFile(Destination.Buffer, &v11[2], v20, 0) )
        {
          v4 = v11 + 2;
          if ( v20 )
            StringCchCopyW((size_t)byte_FC318, v15, v16);
          else
            StringCchCopyW((size_t)v18, v15, v16);
          v12 = (struct _LIST_ENTRY *)(v19 + 16);
          v11[1].Flink = (struct _LIST_ENTRY *)1;
          v11[1].Blink = v12;
          if ( GreEngLoadModuleAllocListLock )
            GreAcquireSemaphore(GreEngLoadModuleAllocListLock);
          Blink = GreEngLoadModuleAllocList.Blink;
          if ( Blink->Flink != GreEngLoadModuleAllocList.Flink )
            __fastfail(3u);
          v11->Flink = GreEngLoadModuleAllocList.Flink;
          v11->Blink = Blink;
          Blink->Flink = v11;
          GreEngLoadModuleAllocList.Blink = v11;
          if ( GreEngLoadModuleAllocListLock )
          {
            EtwTraceGreLockReleaseSemaphore(L"GreEngLoadModuleAllocListLock", GreEngLoadModuleAllocListLock);
            GreReleaseSemaphoreInternal(GreEngLoadModuleAllocListLock);
          }
        }
        else
        {
          Win32FreePool(v10);
        }
      }
      Win32FreePool((PATHOBJ *)Destination.Buffer);
    }
    return v4;
  }
  return result;
}
