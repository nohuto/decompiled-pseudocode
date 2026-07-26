/*
 * XREFs of ?ndisMiniportPreRemoveWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0090D44
 * Callers:
 *     ?ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091D70 (-ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00923A0 (-ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B7C4 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisMiniportPreRemoveWOLPattern(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int8 *a3)
{
  void *OidSourceHandle; // rax
  char *v4; // r8
  __int64 v5; // r9
  int *v6; // rdx
  unsigned int v7; // ecx
  void *v8; // rbx
  int v9; // r11d
  __int64 v10; // r10
  __int64 *v11; // rdx
  __int64 *v12; // r9
  bool v13; // zf
  _QWORD *v14; // r9
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  char v17; // al

  OidSourceHandle = ndisGetOidSourceHandle(a2);
  v6 = *(int **)(v5 + 40);
  v7 = 0;
  v8 = OidSourceHandle;
  *v4 = 0;
  v9 = *v6;
  v11 = *(__int64 **)(v10 + 968);
  if ( !v11 )
    goto LABEL_12;
  do
  {
    v12 = v11;
    if ( *((_DWORD *)v11 + 49) == v9 )
      break;
    v11 = (__int64 *)*v11;
    v12 = 0LL;
  }
  while ( v11 );
  if ( !v12 )
    goto LABEL_12;
  v13 = v12 + 1 == 0LL;
  v14 = v12 + 1;
  v15 = v14;
  if ( v13 )
    goto LABEL_12;
  do
  {
    v16 = v15 - 1;
    if ( (void *)v15[2] == v8 )
      break;
    v15 = (_QWORD *)*v15;
    v16 = 0LL;
  }
  while ( v15 );
  if ( v16 )
  {
    v17 = *v4;
    if ( *v14 )
      v17 = 1;
    *v4 = v17;
  }
  else
  {
LABEL_12:
    v7 = -1073676261;
    *v4 = 1;
  }
  return v7;
}
