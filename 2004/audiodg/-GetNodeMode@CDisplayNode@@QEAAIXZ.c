/*
 * XREFs of ?GetNodeMode@CDisplayNode@@QEAAIXZ @ 0x140041E6C
 * Callers:
 *     ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14004238C (-Serialize@CDisplayNode@@QEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNod.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     memcmp_0 @ 0x14001F433 (memcmp_0.c)
 */

__int64 __fastcall CDisplayNode::GetNodeMode(CDisplayNode *this)
{
  __int64 v1; // r8
  unsigned int v2; // ecx
  __int128 v3; // xmm0
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int128 Buf2; // [rsp+20h] [rbp-20h] BYREF

  v1 = *(_QWORD *)this;
  v2 = 2;
  if ( *(_DWORD *)(v1 + 40) == 2 )
  {
    v3 = *(_OWORD *)(*(_QWORD *)(v1 + 32) + 24LL);
    Buf2 = v3;
    v4 = *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1 - v3;
    if ( *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1 == (_QWORD)v3 )
      v4 = *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4 - *((_QWORD *)&Buf2 + 1);
    if ( v4 )
    {
      Buf2 = v3;
      v5 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 - v3;
      if ( *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 == (_QWORD)v3 )
        v5 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 - *((_QWORD *)&Buf2 + 1);
      if ( v5 )
      {
        Buf2 = v3;
        v6 = *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1 - v3;
        if ( *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1 == (_QWORD)v3 )
          v6 = *(_QWORD *)GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data4 - *((_QWORD *)&Buf2 + 1);
        if ( v6 )
        {
          Buf2 = v3;
          v7 = *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1 - v3;
          if ( *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1 == (_QWORD)v3 )
            v7 = *(_QWORD *)GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data4 - *((_QWORD *)&Buf2 + 1);
          if ( v7 )
          {
            Buf2 = v3;
            v8 = *(_QWORD *)&GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0.Data1 - v3;
            if ( *(_QWORD *)&GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0.Data1 == (_QWORD)v3 )
              v8 = *(_QWORD *)GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0.Data4 - *((_QWORD *)&Buf2 + 1);
            if ( v8 )
            {
              Buf2 = v3;
              v9 = *(_QWORD *)&GUID_461d14af_a88e_4be1_a809_d8bfd44b0121.Data1 - v3;
              if ( *(_QWORD *)&GUID_461d14af_a88e_4be1_a809_d8bfd44b0121.Data1 == (_QWORD)v3 )
                v9 = *(_QWORD *)GUID_461d14af_a88e_4be1_a809_d8bfd44b0121.Data4 - *((_QWORD *)&Buf2 + 1);
              if ( v9 )
              {
                Buf2 = v3;
                v10 = *(_QWORD *)&GUID_9cf2a70b_f377_403b_bd6b_360863e0355c.Data1 - v3;
                if ( *(_QWORD *)&GUID_9cf2a70b_f377_403b_bd6b_360863e0355c.Data1 == (_QWORD)v3 )
                  v10 = *(_QWORD *)GUID_9cf2a70b_f377_403b_bd6b_360863e0355c.Data4 - *((_QWORD *)&Buf2 + 1);
                if ( v10 )
                {
                  Buf2 = v3;
                  v11 = *(_QWORD *)&GUID_4780004e_7133_41d8_8c74_660dadd2c0ee.Data1 - v3;
                  if ( *(_QWORD *)&GUID_4780004e_7133_41d8_8c74_660dadd2c0ee.Data1 == (_QWORD)v3 )
                    v11 = *(_QWORD *)GUID_4780004e_7133_41d8_8c74_660dadd2c0ee.Data4 - *((_QWORD *)&Buf2 + 1);
                  if ( v11 )
                  {
                    Buf2 = v3;
                    return memcmp_0(&GUID_b26feb0d_ec94_477c_9494_d1ab8e753f6e, &Buf2, 0x10uLL) == 0 ? 8 : 0;
                  }
                  else
                  {
                    return 7;
                  }
                }
                else
                {
                  return 6;
                }
              }
              else
              {
                return 9;
              }
            }
            else
            {
              return 5;
            }
          }
          else
          {
            return 4;
          }
        }
        else
        {
          return 3;
        }
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return 0;
  }
  return v2;
}
