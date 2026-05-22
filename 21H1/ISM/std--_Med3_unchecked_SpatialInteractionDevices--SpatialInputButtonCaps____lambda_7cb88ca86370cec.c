/*
 * XREFs of std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C8AB4
 * Callers:
 *     std::_Guess_median_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C8370 (std--_Guess_median_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps____lambda_7cb88ca.c)
 * Callees:
 *     _lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator() @ 0x1800C93A8 (_lambda_7cb88ca86370cec64ac2ea824bd2a3de_--operator().c)
 */

__int64 __fastcall std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        __int64 a1,
        __int64 a2)
{
  __int64 *v2; // rdx
  __int64 v3; // rcx
  __int64 *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 v7; // xmm1_8
  __int64 result; // rax
  __int64 *v9; // r9
  __int64 v10; // r10
  __int64 *v11; // r11
  __int64 v12; // xmm1_8
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // r9
  __int64 v16; // r10

  if ( (unsigned __int8)lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator()(a1, a2, a1) )
  {
    v7 = *v2;
    v3 = *((unsigned int *)v2 + 2);
    *v2 = *v4;
    *((_DWORD *)v2 + 2) = *((_DWORD *)v4 + 2);
    *v4 = v7;
    *((_DWORD *)v4 + 2) = v3;
  }
  result = lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator()(v3, v6, v5);
  if ( (_BYTE)result )
  {
    v12 = *v11;
    v13 = *((unsigned int *)v11 + 2);
    *v11 = *v9;
    *((_DWORD *)v11 + 2) = *((_DWORD *)v9 + 2);
    *v9 = v12;
    *((_DWORD *)v9 + 2) = v13;
    result = lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator()(v13, v9, v10);
    if ( (_BYTE)result )
    {
      *(_QWORD *)v15 = *(_QWORD *)v16;
      result = *(unsigned int *)(v16 + 8);
      *(_DWORD *)(v15 + 8) = result;
      *(_QWORD *)v16 = v12;
      *(_DWORD *)(v16 + 8) = v14;
    }
  }
  return result;
}
