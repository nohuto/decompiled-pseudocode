/*
 * XREFs of ?DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEBUDisplayIDObj@@AEAPEAU_DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK@@@Z @ 0x1C005E158
 * Callers:
 *     ?DisplayID_GetManufactureDate@@YAJPEBUDisplayIDObj@@PEAEPEAG@Z @ 0x1C005DE2C (-DisplayID_GetManufactureDate@@YAJPEBUDisplayIDObj@@PEAEPEAG@Z.c)
 *     ?DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C005DEA0 (-DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C005DF70 (-DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetSerialNumber@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C005DFE8 (-DisplayID_GetSerialNumber@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z @ 0x1C005E074 (-DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK(
        const struct DisplayIDObj *a1,
        struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK **a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rax
  char v6; // cl
  struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *v7; // rdx

  if ( !a1 || !*((_DWORD *)a1 + 5) )
    return 3221225485LL;
  if ( !*((_BYTE *)a1 + 16) )
    return 3223126019LL;
  v4 = *(unsigned __int8 *)(*(_QWORD *)a1 + 1LL);
  v5 = *(_QWORD *)a1 + 4LL;
  v6 = -*(_BYTE *)(*(_QWORD *)a1 + 1LL);
  v7 = (struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *)(v5 & -(__int64)(v6 != 0));
  if ( (unsigned __int8)v4 < 3u
    || v4 < (unsigned int)*(unsigned __int8 *)((v5 & -(__int64)(v6 != 0)) + 2) + 3
    || *(_BYTE *)v7 != 32 )
  {
    return 3221225659LL;
  }
  *a2 = v7;
  return 0LL;
}
