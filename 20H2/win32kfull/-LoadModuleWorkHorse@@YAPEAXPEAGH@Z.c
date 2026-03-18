/*
 * XREFs of ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C0288A1C
 * Callers:
 *     EngLoadModule @ 0x1C0289630 (EngLoadModule.c)
 *     EngLoadModuleForWrite @ 0x1C0289650 (EngLoadModuleForWrite.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0061F00 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 *     ?GetModuleHandleAndIncrementRefcount@@YAPEAXPEBG@Z @ 0x1C0288954 (-GetModuleHandleAndIncrementRefcount@@YAPEAXPEBG@Z.c)
 *     bMapFile @ 0x1C0289B30 (bMapFile.c)
 *     MakeSystemRelativePath @ 0x1C02DBC44 (MakeSystemRelativePath.c)
 */

__int64 __fastcall LoadModuleWorkHorse(char *Source, int a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // r15
  char *v8; // rax
  char *v9; // rbx
  char *v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  signed __int64 v13; // rdx
  __int16 v14; // ax
  char *v15; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-38h] BYREF

  v2 = -1LL;
  Destination = 0LL;
  result = -1LL;
  v6 = 0LL;
  do
    ++result;
  while ( *(_WORD *)&Source[2 * result] );
  if ( result )
  {
    if ( a2 || (result = (__int64)GetModuleHandleAndIncrementRefcount((wchar_t *)Source), (v6 = result) == 0) )
    {
      do
        ++v2;
      while ( *(_WORD *)&Source[2 * v2] );
      v7 = (2 * (_DWORD)v2 + 9) & 0xFFFFFFF8;
      if ( (unsigned int)MakeSystemRelativePath((PCWSTR)Source, &Destination) )
      {
        v8 = (char *)PALLOCMEM2((unsigned int)(v7 + 104), 1818846791LL, 1);
        v9 = v8;
        if ( v8 )
        {
          v10 = &v8[v7];
          if ( (unsigned int)bMapFile(Destination.Buffer) )
          {
            v11 = (unsigned __int64)(unsigned int)v7 >> 1;
            v6 = (__int64)(v10 + 24);
            if ( a2 )
            {
              if ( v11 )
              {
                v12 = 2147483646 - v11;
                v13 = (char *)&word_1C02E436C - v9;
                do
                {
                  if ( !(v12 + v11) )
                    break;
                  v14 = *(_WORD *)&v9[v13];
                  if ( !v14 )
                    break;
                  *(_WORD *)v9 = v14;
                  v9 += 2;
                  --v11;
                }
                while ( v11 );
                v15 = v9 - 2;
                if ( v11 )
                  v15 = v9;
                *(_WORD *)v15 = 0;
              }
            }
            else
            {
              StringCchCopyW(v9, v11, Source);
            }
            *((_DWORD *)v10 + 4) = 1;
            *((_DWORD *)v10 + 5) = v7 + 24;
            if ( GreEngLoadModuleAllocListLock )
              GreAcquireSemaphore(GreEngLoadModuleAllocListLock);
            Blink = GreEngLoadModuleAllocList.Blink;
            if ( Blink->Flink != GreEngLoadModuleAllocList.Flink )
              __fastfail(3u);
            *(_QWORD *)v10 = GreEngLoadModuleAllocList.Flink;
            *((_QWORD *)v10 + 1) = Blink;
            Blink->Flink = (struct _LIST_ENTRY *)v10;
            GreEngLoadModuleAllocList.Blink = (struct _LIST_ENTRY *)v10;
            if ( GreEngLoadModuleAllocListLock )
            {
              EtwTraceGreLockReleaseSemaphore(L"GreEngLoadModuleAllocListLock", GreEngLoadModuleAllocListLock);
              GreReleaseSemaphoreInternal(GreEngLoadModuleAllocListLock);
            }
          }
          else
          {
            Win32FreePool(v9);
          }
        }
        Win32FreePool(Destination.Buffer);
      }
      return v6;
    }
  }
  return result;
}
