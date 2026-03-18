/*
 * XREFs of ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x1800734B0
 * Callers:
 *     _anonymous_namespace_::GlobalResourceCountersEncoder::Serialize @ 0x180071BA4 (_anonymous_namespace_--GlobalResourceCountersEncoder--Serialize.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x180071CC8 (_anonymous_namespace_--SendFramesReport.c)
 *     _anonymous_namespace_::ProcessAttributionResourceCountersEncoder::Serialize @ 0x1800727CC (_anonymous_namespace_--ProcessAttributionResourceCountersEncoder--Serialize.c)
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x180072914 (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x180072BA8 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x1800733E8 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?AppendByte@Base853Encoder@@QEAAXE@Z @ 0x180073698 (-AppendByte@Base853Encoder@@QEAAXE@Z.c)
 * Callees:
 *     ??$_Reallocate_grow_by@V_lambda_319d5e083f45f90dcdce5dce53cbb275_@@D@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_319d5e083f45f90dcdce5dce53cbb275_@@D@Z @ 0x1800C2534 (--$_Reallocate_grow_by@V_lambda_319d5e083f45f90dcdce5dce53cbb275_@@D@-$basic_string@DU-$char_tra.c)
 */

void __fastcall Base853Encoder::EncodeBlock(Base853Encoder *this)
{
  unsigned int v1; // r8d
  unsigned int v3; // edi
  unsigned int v4; // r9d
  char v5; // r14
  unsigned int v6; // r8d
  char v7; // r15
  char v8; // r9
  char v9; // bp
  _QWORD *v10; // rcx
  char v11; // si
  unsigned __int64 v12; // rdx
  bool v13; // cf
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rdx

  v1 = *((_DWORD *)this + 2);
  v3 = *((_DWORD *)this + 3) + 1;
  v4 = v1 / 0x55;
  v5 = a0123456789Abcd[v1 % 0x55];
  v6 = v1 / 0x55 / 0x55;
  v7 = a0123456789Abcd[v4 - 85 * v6];
  v8 = a0123456789Abcd[v6 / 0x55 / 0x55];
  v9 = a0123456789Abcd[v6 % 0x55];
  v10 = *(_QWORD **)this;
  v11 = a0123456789Abcd[v6 / 0x55 % 0x55];
  v12 = *(_QWORD *)(*(_QWORD *)this + 16LL);
  if ( v12 >= *(_QWORD *)(*(_QWORD *)this + 24LL) )
  {
    std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(v10);
  }
  else
  {
    v13 = v10[3] < 0x10uLL;
    v10[2] = v12 + 1;
    if ( !v13 )
      v10 = (_QWORD *)*v10;
    *((_BYTE *)v10 + v12) = v8;
    *((_BYTE *)v10 + v12 + 1) = 0;
  }
  v14 = *(_QWORD **)this;
  v15 = *(_QWORD *)(*(_QWORD *)this + 16LL);
  if ( v15 >= *(_QWORD *)(*(_QWORD *)this + 24LL) )
  {
    std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(v14);
  }
  else
  {
    v13 = v14[3] < 0x10uLL;
    v14[2] = v15 + 1;
    if ( !v13 )
      v14 = (_QWORD *)*v14;
    *((_BYTE *)v14 + v15) = v11;
    *((_BYTE *)v14 + v15 + 1) = 0;
  }
  if ( v3 > 2 )
  {
    v16 = *(_QWORD **)this;
    v17 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    if ( v17 >= *(_QWORD *)(*(_QWORD *)this + 24LL) )
    {
      std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(v16);
    }
    else
    {
      v13 = v16[3] < 0x10uLL;
      v16[2] = v17 + 1;
      if ( !v13 )
        v16 = (_QWORD *)*v16;
      *((_BYTE *)v16 + v17) = v9;
      *((_BYTE *)v16 + v17 + 1) = 0;
    }
    if ( v3 > 3 )
    {
      v18 = *(_QWORD **)this;
      v19 = *(_QWORD *)(*(_QWORD *)this + 16LL);
      if ( v19 >= *(_QWORD *)(*(_QWORD *)this + 24LL) )
      {
        std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(v18);
      }
      else
      {
        v13 = v18[3] < 0x10uLL;
        v18[2] = v19 + 1;
        if ( !v13 )
          v18 = (_QWORD *)*v18;
        *((_BYTE *)v18 + v19) = v7;
        *((_BYTE *)v18 + v19 + 1) = 0;
      }
      if ( v3 > 4 )
      {
        v20 = *(_QWORD **)this;
        v21 = *(_QWORD *)(*(_QWORD *)this + 16LL);
        if ( v21 >= *(_QWORD *)(*(_QWORD *)this + 24LL) )
        {
          std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(v20);
        }
        else
        {
          v13 = v20[3] < 0x10uLL;
          v20[2] = v21 + 1;
          if ( !v13 )
            v20 = (_QWORD *)*v20;
          *((_BYTE *)v20 + v21) = v5;
          *((_BYTE *)v20 + v21 + 1) = 0;
        }
      }
    }
  }
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
}
