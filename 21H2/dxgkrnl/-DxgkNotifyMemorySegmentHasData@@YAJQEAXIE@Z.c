/*
 * XREFs of ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x1C0046790
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C00151D0 (DpiGetDxgAdapter.c)
 *     ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x1C001AAD8 (-DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z.c)
 */

__int64 __fastcall DxgkNotifyMemorySegmentHasData(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rdi
  __int64 DxgAdapter; // rax
  unsigned int v6; // ebx
  DXGADAPTER *v7; // r9
  unsigned int v8; // ecx
  unsigned int *v9; // rdi
  unsigned int v10; // eax
  unsigned int v11; // eax

  v4 = a2;
  DxgAdapter = DpiGetDxgAdapter(a1);
  v6 = 0;
  v7 = (DXGADAPTER *)DxgAdapter;
  if ( *(_QWORD *)(DxgAdapter + 2904) )
  {
    v8 = 0;
    v9 = (unsigned int *)(*(_QWORD *)(DxgAdapter + 2896) + 520 * v4);
    if ( v9[2] > 1 )
    {
      v10 = v9[86];
      if ( a3 )
      {
        if ( v10 )
        {
          v11 = DXGADAPTER::DdiSetPowerComponentFState(v7, v9[1], 0LL);
          v9[86] = 0;
          return v11;
        }
      }
      else if ( !v10 )
      {
        v11 = DXGADAPTER::DdiSetPowerComponentFState(v7, v9[1], 1LL);
        v9[86] = 1;
        return v11;
      }
    }
    return v8;
  }
  return v6;
}
