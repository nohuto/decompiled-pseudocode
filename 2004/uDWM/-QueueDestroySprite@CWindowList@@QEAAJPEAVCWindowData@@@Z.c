/*
 * XREFs of ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x18003EA4C
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18001A8C0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180019DC0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall CWindowList::QueueDestroySprite(CWindowList *this, struct CWindowData *a2)
{
  char *v2; // rsi
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v6; // r9
  unsigned int v7; // r8d
  struct CWindowData **v8; // rcx
  unsigned int v9; // ecx
  int v10; // ebx
  struct CWindowData **v12; // [rsp+40h] [rbp+8h] BYREF
  struct CWindowData *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v2 = (char *)this + 248;
  v3 = 0;
  v4 = *((unsigned int *)this + 68);
  v6 = *((_QWORD *)this + 31);
  v7 = 0;
  if ( (_DWORD)v4 )
  {
    v8 = (struct CWindowData **)*((_QWORD *)this + 31);
    do
    {
      if ( a2 == *v8 )
        break;
      ++v7;
      ++v8;
    }
    while ( v7 < (unsigned int)v4 );
  }
  if ( v7 >= *((_DWORD *)this + 68) )
  {
    v9 = v4 + 1;
    if ( (int)v4 + 1 < (unsigned int)v4 )
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    else
    {
      v10 = 0;
      if ( v9 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(v6 + 8 * v4) = a2;
        *((_DWORD *)v2 + 6) = v9;
      }
      else
      {
        v12 = &v13;
        v10 = DynArrayImpl<0>::Grow((char **)v2, 8u, 1, 0, (unsigned __int64 *)&v12);
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xC0u);
        else
          *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)v2 + 6))++) + *(_QWORD *)v2) = *v12;
      }
    }
    return (unsigned int)v10;
  }
  return v3;
}
