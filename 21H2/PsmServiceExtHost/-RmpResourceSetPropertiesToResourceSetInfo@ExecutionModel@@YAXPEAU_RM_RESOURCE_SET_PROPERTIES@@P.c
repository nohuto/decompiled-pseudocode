/*
 * XREFs of ?RmpResourceSetPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x1800338F4
 * Callers:
 *     RmCoreRpcSrvAcquireResourceSet @ 0x180033780 (RmCoreRpcSrvAcquireResourceSet.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::RmpResourceSetPropertiesToResourceSetInfo(
        ExecutionModel *this,
        struct _RM_RESOURCE_SET_PROPERTIES *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  bool v3; // zf
  int v4; // eax
  _DWORD *v5; // r8
  __int64 v6; // r9

  *((_QWORD *)a2 + 17) = *(_QWORD *)this;
  *((_DWORD *)a2 + 32) = 2;
  *((_QWORD *)a2 + 14) = *((_QWORD *)this + 1);
  *((_DWORD *)a2 + 26) = 1;
  *((_QWORD *)a2 + 8) = *((_QWORD *)this + 9);
  *((_QWORD *)a2 + 3) = *((_QWORD *)this + 8);
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 7);
  *((_QWORD *)a2 + 45) = *((_QWORD *)this + 6);
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 22);
  v3 = (*((_BYTE *)a2 + 16) & 1) == 0;
  *((_DWORD *)a2 + 12) = (*((_DWORD *)this + 22) >> 2) & 1;
  if ( !v3 )
    *((_DWORD *)a2 + 4) = *((_DWORD *)this + 8);
  v4 = *((unsigned __int8 *)this + 35);
  v5 = (_DWORD *)((char *)a2 + 96);
  *((_DWORD *)a2 + 2) = v4;
  v6 = 3LL;
  *((_DWORD *)a2 + 8) = v4;
  do
  {
    *v5 = v4;
    v5 += 6;
    --v6;
  }
  while ( v6 );
  *((_DWORD *)a2 + 8) = *((unsigned __int8 *)this + 36);
  *((_BYTE *)a2 + 42) = *((_BYTE *)this + 98);
  *((_WORD *)a2 + 20) = *((_WORD *)this + 48);
  *(_DWORD *)a2 = *((_DWORD *)this + 6);
  memset_0((char *)a2 + 164, 0, 0xBCuLL);
}
