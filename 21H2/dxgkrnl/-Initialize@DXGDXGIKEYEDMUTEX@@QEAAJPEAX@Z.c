/*
 * XREFs of ?Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z @ 0x1C029A578
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C02A1130 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::Initialize(DXGDXGIKEYEDMUTEX *this, void *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v10; // rax
  _QWORD *v11; // [rsp+40h] [rbp+8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  v4 = ObReferenceObjectByHandle(a2, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, (PVOID *)&v11, &v12);
  v6 = v11;
  v7 = v4;
  *(_QWORD *)this = v11;
  if ( v4 >= 0 )
  {
    if ( v6[3] && v6[4] )
    {
      return 0LL;
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v10 + 24) = a2;
      WdLogEvent5_WdError(v10);
      return 3221225485LL;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = a2;
    WdLogEvent5_WdError(v8);
    return v7;
  }
}
