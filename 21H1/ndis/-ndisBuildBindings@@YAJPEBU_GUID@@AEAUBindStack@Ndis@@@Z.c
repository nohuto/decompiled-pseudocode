/*
 * XREFs of ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C012475C
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0107B78 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ??1NetworkInterfaceBindProperties@@QEAA@XZ @ 0x1C00ABE18 (--1NetworkInterfaceBindProperties@@QEAA@XZ.c)
 *     ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x1C010293C (-AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z.c)
 *     ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x1C0102C2C (-AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z.c)
 *     ndisBuildMonitoringLwfBindings @ 0x1C0124950 (ndisBuildMonitoringLwfBindings.c)
 *     ndisIntersectAtoms @ 0x1C0124B80 (ndisIntersectAtoms.c)
 *     ndisIsLwfBindable @ 0x1C0124D04 (ndisIsLwfBindable.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x1C0124DF4 (ndisIsLwfBindingEnabled_0.c)
 *     ndisIsProtocolBindingEnabled @ 0x1C0124E84 (ndisIsProtocolBindingEnabled.c)
 *     ndisReadNicBindProperties @ 0x1C0125288 (ndisReadNicBindProperties.c)
 */

__int64 __fastcall ndisBuildBindings(struct _GUID *a1, struct Ndis::BindStack *a2)
{
  unsigned int v2; // ebx
  unsigned int NicBindProperties; // eax
  _QWORD *v4; // r15
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  struct _GUID *v8; // r14
  _QWORD *v9; // r14
  unsigned __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r12
  struct _GUID *v13; // r15
  __int64 v15; // [rsp+28h] [rbp-41h]
  struct _GUID v16; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v18[4]; // [rsp+50h] [rbp-19h] BYREF
  int v19; // [rsp+70h] [rbp+7h]

  v2 = 0;
  v17[0] = 0LL;
  v17[1] = 0LL;
  memset(v18, 0, sizeof(v18));
  v19 = 0;
  NicBindProperties = ndisReadNicBindProperties(a1);
  if ( NicBindProperties )
    goto LABEL_18;
  v4 = qword_1C00E4498;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *((unsigned int *)qword_1C00E4498 + 7);
  v15 = v7;
  while ( v5 != v7 )
  {
    if ( v5 >= *((unsigned int *)v4 + 7) )
LABEL_17:
      __fastfail(5u);
    v8 = (struct _GUID *)(v6 + v4[4]);
    if ( (unsigned __int8)ndisIntersectAtoms(v17, v8[1].Data4) )
    {
      if ( !(unsigned __int8)ndisIntersectAtoms(v18, v8[1].Data4)
        && !(unsigned __int8)ndisIntersectAtoms(v17, v8[2].Data4) )
      {
        NicBindProperties = ndisIsProtocolBindingEnabled(&v16, v8);
        if ( NicBindProperties )
          goto LABEL_18;
      }
    }
    v7 = v15;
    ++v5;
    v6 += 64LL;
  }
  NicBindProperties = ndisBuildMonitoringLwfBindings(&v16);
  if ( NicBindProperties )
  {
LABEL_18:
    v2 = NicBindProperties;
  }
  else
  {
    v9 = qword_1C00E4498;
    v10 = 0LL;
    v11 = 0LL;
    v12 = *((unsigned int *)qword_1C00E4498 + 11);
    while ( v10 != v12 )
    {
      if ( v10 >= *((unsigned int *)v9 + 11) )
        goto LABEL_17;
      v13 = (struct _GUID *)(v11 + v9[6]);
      if ( (unsigned __int8)ndisIsLwfBindable(&v16, v13) )
      {
        NicBindProperties = ndisIsLwfBindingEnabled_0(&v16, v13);
        if ( NicBindProperties )
          goto LABEL_18;
      }
      ++v10;
      v11 += 64LL;
    }
  }
  NetworkInterfaceBindProperties::~NetworkInterfaceBindProperties((NetworkInterfaceBindProperties *)&v16);
  return v2;
}
