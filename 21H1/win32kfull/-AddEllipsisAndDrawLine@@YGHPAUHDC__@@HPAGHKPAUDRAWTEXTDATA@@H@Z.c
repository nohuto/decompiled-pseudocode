/*
 * XREFs of ?AddEllipsisAndDrawLine@@YGHPAUHDC__@@HPAGHKPAUDRAWTEXTDATA@@H@Z @ 0x1B7AAC
 * Callers:
 *     _DrawTextExWorker@28 @ 0x1B8194 (_DrawTextExWorker@28.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?DT_DrawJustifiedLine@@YGXPAUHDC__@@HPBGHIPAUDRAWTEXTDATA@@H@Z @ 0x1B7C90 (-DT_DrawJustifiedLine@@YGXPAUHDC__@@HPBGHIPAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YGHPAUHDC__@@PBGPAHPAUDRAWTEXTDATA@@I3H@Z @ 0x1B8097 (-NeedsEndEllipsis@@YGHPAUHDC__@@PBGPAHPAUDRAWTEXTDATA@@I3H@Z.c)
 */

int __userpurge AddEllipsisAndDrawLine@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        HDC a3,
        int a4,
        unsigned __int16 *a5,
        struct DRAWTEXTDATA *a6,
        unsigned int a7,
        struct DRAWTEXTDATA *a8,
        int a9)
{
  int unused; // ebx
  int v10; // esi
  PKTHREAD CurrentThread; // eax
  unsigned int v12; // ecx
  int v13; // eax
  struct HDC__ *v14; // edi
  int result; // eax
  int v16; // esi
  int v17; // esi
  HDC v18; // eax
  PKTHREAD v19; // eax
  int ThreadWin32Thread; // eax
  struct DRAWTEXTDATA *v21; // [esp+0h] [ebp-13Ch]
  int v22; // [esp+4h] [ebp-138h]
  _DWORD v23[5]; // [esp+Ch] [ebp-130h] BYREF
  struct DRAWTEXTDATA *v24; // [esp+20h] [ebp-11Ch]
  int v25; // [esp+24h] [ebp-118h]
  struct HDC__ v26; // [esp+28h] [ebp-114h] BYREF
  void *Src; // [esp+2Ch] [ebp-110h]
  struct HDC__ v28; // [esp+30h] [ebp-10Ch] BYREF

  unused = a4;
  Src = a3;
  v24 = a6;
  v23[3] = a1;
  memset(v23, 0, 12);
  v10 = 0;
  v23[4] = a2;
  v26.unused = a4;
  v25 = 0;
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  if ( ((unsigned __int16)a5 & 0x8000) != 0
    && (v13 = NeedsEndEllipsis(&v26, (const unsigned __int16 *)v24, a5, v24, v12, v21, v22), unused = v26.unused, v13) )
  {
    if ( v26.unused + 4 > 128 )
    {
      result = UserRtlAllocMem(2 * (v26.unused + 4));
      v16 = result;
      v25 = result;
      if ( !result )
        return result;
      PushW32ThreadLock(result, v23, (int)Win32FreePool);
      v14 = (struct HDC__ *)v16;
    }
    else
    {
      v14 = &v28;
    }
    v17 = 2 * unused;
    memcpy(v14, Src, 2 * unused);
    *(_DWORD *)((char *)v14 + v17) = 3014702;
    *(_DWORD *)((char *)v14 + v17 + 4) = 46;
    v18 = v14;
    v10 = v25;
    unused += 3;
  }
  else
  {
    v18 = (HDC)Src;
  }
  DT_DrawJustifiedLine(v18, unused, a5, (int)v24, v12, v21, v22);
  if ( v10 )
  {
    v19 = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(v19);
    *(_DWORD *)(ThreadWin32Thread + 8) = v23[0];
    UserRtlFreeMem(v10);
  }
  return unused;
}
