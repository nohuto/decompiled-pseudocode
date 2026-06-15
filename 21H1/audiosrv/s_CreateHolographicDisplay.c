/*
 * XREFs of s_CreateHolographicDisplay @ 0x1800F78C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056710 (--2@YAPEAX_K@Z.c)
 *     ??_GCHMDManager@@QEAAPEAXI@Z @ 0x1800F740C (--_GCHMDManager@@QEAAPEAXI@Z.c)
 *     ?InitHolographicDisplay@CHMDManager@@QEAAJXZ @ 0x1800F7668 (-InitHolographicDisplay@CHMDManager@@QEAAJXZ.c)
 */

__int64 __fastcall s_CreateHolographicDisplay(__int64 a1, CHMDManager **a2)
{
  RPC_STATUS v3; // ebx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  CHMDManager *v7; // rax
  CHMDManager *v8; // rdi
  CHMDManager *v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // r9
  int inited; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v15; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = I_RpcBindingInqLocalClientPID(0LL, &v15);
  if ( v3 )
  {
    v4 = v3 | 0x80010000;
    v5 = 105LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
      (const char *)v4);
    return v4;
  }
  if ( LODWORD(g_ADGProcess[2].OwningThread) != v15 )
  {
    v4 = -2147024891;
    v5 = 110LL;
    goto LABEL_3;
  }
  v7 = (CHMDManager *)operator new(0x18uLL);
  v8 = v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = 0LL;
    *((_QWORD *)v7 + 1) = 0LL;
    *((_QWORD *)v7 + 2) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = v8;
  if ( v8 )
  {
    inited = CHMDManager::InitHolographicDisplay(v8);
    v10 = inited;
    if ( inited >= 0 )
    {
      v9 = 0LL;
      *a2 = v8;
      v10 = 0;
      goto LABEL_15;
    }
    v12 = (unsigned int)inited;
    v11 = 116LL;
  }
  else
  {
    v10 = -2147024882;
    v11 = 114LL;
    v12 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
    (const char *)v12);
LABEL_15:
  if ( v9 )
    CHMDManager::`scalar deleting destructor'(v9);
  return v10;
}
