/*
 * XREFs of ?StringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18000CB7C
 * Callers:
 *     ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x18000CBC8 (--0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbCopyNW(char *a1, __int64 a2, char *a3)
{
  signed __int64 v3; // r8
  __int64 v4; // rdx
  unsigned __int16 v5; // ax
  unsigned __int16 *v6; // rax

  v3 = a3 - a1;
  v4 = 32LL;
  do
  {
    v5 = *(_WORD *)&a1[v3];
    if ( !v5 )
      break;
    *(_WORD *)a1 = v5;
    a1 += 2;
    --v4;
  }
  while ( v4 );
  v6 = (unsigned __int16 *)(a1 - 2);
  if ( v4 )
    v6 = (unsigned __int16 *)a1;
  *v6 = 0;
  return v4 == 0 ? 0x8007007A : 0;
}
