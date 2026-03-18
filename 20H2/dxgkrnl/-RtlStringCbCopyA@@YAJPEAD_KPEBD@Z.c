/*
 * XREFs of ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1C00199E8
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00E8AD0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C01029A0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyA(char *a1, __int64 a2, const char *a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  char v5; // al
  char *v6; // rax

  v3 = 17LL;
  v4 = a3 - a1;
  do
  {
    if ( v3 == -2147483629 )
      break;
    v5 = a1[v4];
    if ( !v5 )
      break;
    *a1++ = v5;
    --v3;
  }
  while ( v3 );
  v6 = a1 - 1;
  if ( v3 )
    v6 = a1;
  *v6 = 0;
  return v3 == 0 ? 0x80000005 : 0;
}
