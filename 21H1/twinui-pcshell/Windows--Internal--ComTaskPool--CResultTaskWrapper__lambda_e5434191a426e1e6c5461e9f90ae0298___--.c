/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e5434191a426e1e6c5461e9f90ae0298___::CResultTaskWrapper__lambda_e5434191a426e1e6c5461e9f90ae0298_____lambda_e5434191a426e1e6c5461e9f90ae0298___ @ 0x1802C3F10
 * Callers:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e5434191a426e1e6c5461e9f90ae0298___ @ 0x1802C42B4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_e5434191a426e1e6c5461e9f90ae0298.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038890 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e5434191a426e1e6c5461e9f90ae0298___::CResultTaskWrapper__lambda_e5434191a426e1e6c5461e9f90ae0298_____lambda_e5434191a426e1e6c5461e9f90ae0298___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // xmm0_8
  __int64 result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a3 + 16);
  v6 = *(_QWORD *)(a3 + 32);
  *(_QWORD *)a1 = off_180490E68;
  result = a1;
  *(_QWORD *)(a1 + 48) = v6;
  *(_QWORD *)(a1 + 56) = a2;
  return result;
}
