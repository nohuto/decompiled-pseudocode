/*
 * XREFs of ?bCurrentTlDriverCall@@YGHAAVPDEVOBJ@@@Z @ 0x3032C
 * Callers:
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

int __thiscall bCurrentTlDriverCall(PDEVOBJ *this)
{
  PKTHREAD CurrentThread; // edi
  int *ThreadWin32Thread; // eax
  int v4; // edi
  int v5; // esi
  int v6; // edi
  int *v7; // eax
  PKTHREAD v8; // eax
  int v10; // [esp+Ch] [ebp-8h]
  PKTHREAD v12; // [esp+10h] [ebp-4h]

  CurrentThread = KeGetCurrentThread();
  if ( IsThreadCrossSessionAttached() )
    return 0;
  ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread )
    return 0;
  v4 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread )
    return 0;
  if ( !PDEVOBJ::bAllowShareAccess(this) )
    return 0;
  v5 = 0;
  if ( !*(_DWORD *)(v4 + 52) && !*(_DWORD *)(v4 + 56) )
    return 0;
  v10 = *(_DWORD *)this + 64;
  v12 = KeGetCurrentThread();
  v6 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    v7 = (int *)PsGetThreadWin32Thread(v12);
    if ( v7 )
      v6 = *v7;
  }
  if ( *(_DWORD *)(*(_DWORD *)(v6 + 156) + 28) == v10 )
  {
    v8 = KeGetCurrentThread();
    return **(_DWORD **)(W32GetThreadWin32Thread(v8) + 156);
  }
  return v5;
}
