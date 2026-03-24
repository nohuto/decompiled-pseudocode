/*
 * XREFs of ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x18004CFE0
 * Callers:
 *     _anonymous_namespace_::GlobalResourceCountersEncoder::Serialize @ 0x18004B6D4 (_anonymous_namespace_--GlobalResourceCountersEncoder--Serialize.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x18004B7F8 (_anonymous_namespace_--SendFramesReport.c)
 *     _anonymous_namespace_::ProcessAttributionResourceCountersEncoder::Serialize @ 0x18004C2FC (_anonymous_namespace_--ProcessAttributionResourceCountersEncoder--Serialize.c)
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x18004C444 (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x18004C6D8 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x18004CF18 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?AppendByte@Base853Encoder@@QEAAXE@Z @ 0x18004D1C8 (-AppendByte@Base853Encoder@@QEAAXE@Z.c)
 * Callees:
 *     ??$_Reallocate_grow_by@V_lambda_319d5e083f45f90dcdce5dce53cbb275_@@D@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_319d5e083f45f90dcdce5dce53cbb275_@@D@Z @ 0x18004A9A8 (--$_Reallocate_grow_by@V_lambda_319d5e083f45f90dcdce5dce53cbb275_@@D@-$basic_string@DU-$char_tra.c)
 */

void __fastcall Base853Encoder::EncodeBlock(Base853Encoder *this)
{
  unsigned int v1; // r8d
  unsigned int v3; // edi
  unsigned int v4; // r9d
  char v5; // r14
  unsigned int v6; // r8d
  __int64 v7; // rcx
  unsigned int v8; // r9d
  char v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  char v13; // r9
  char v14; // bp
  const void **v15; // rcx
  char v16; // si
  unsigned __int64 v17; // rdx
  bool v18; // cf
  const void **v19; // rcx
  unsigned __int64 v20; // rdx
  const void **v21; // rcx
  unsigned __int64 v22; // rdx
  const void **v23; // rcx
  unsigned __int64 v24; // rdx
  const void **v25; // rcx
  unsigned __int64 v26; // rdx

  v1 = *((_DWORD *)this + 2);
  v3 = *((_DWORD *)this + 3) + 1;
  v4 = v1 / 0x55;
  v5 = a0123456789Abcd[v1 % 0x55];
  v6 = v1 / 0x55 / 0x55;
  v7 = (int)(v4 - 85 * v6);
  v8 = v6 / 0x55;
  v9 = a0123456789Abcd[v7];
  v10 = v6 / 0x55 / 0x55;
  v11 = v6 % 0x55;
  v12 = (int)(v8 - 85 * v10);
  v13 = a0123456789Abcd[v10];
  v14 = a0123456789Abcd[(int)v11];
  v15 = *(const void ***)this;
  v16 = a0123456789Abcd[v12];
  v17 = *(_QWORD *)(*(_QWORD *)this + 16LL);
  if ( v17 >= *(_QWORD *)(*(_QWORD *)this + 24LL) )
  {
    std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(v15, v17, v11, v13);
  }
  else
  {
    v18 = (unsigned __int64)v15[3] < 0x10;
    v15[2] = (const void *)(v17 + 1);
    if ( !v18 )
      v15 = (const void **)*v15;
    *((_BYTE *)v15 + v17) = v13;
    *((_BYTE *)v15 + v17 + 1) = 0;
  }
  v19 = *(const void ***)this;
  v20 = *(_QWORD *)(*(_QWORD *)this + 16LL);
  if ( v20 >= *(_QWORD *)(*(_QWORD *)this + 24LL) )
  {
    std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(v19, v20, v11, v16);
  }
  else
  {
    v18 = (unsigned __int64)v19[3] < 0x10;
    v19[2] = (const void *)(v20 + 1);
    if ( !v18 )
      v19 = (const void **)*v19;
    *((_BYTE *)v19 + v20) = v16;
    *((_BYTE *)v19 + v20 + 1) = 0;
  }
  if ( v3 > 2 )
  {
    v21 = *(const void ***)this;
    v22 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    if ( v22 >= *(_QWORD *)(*(_QWORD *)this + 24LL) )
    {
      std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(v21, v22, v11, v14);
    }
    else
    {
      v18 = (unsigned __int64)v21[3] < 0x10;
      v21[2] = (const void *)(v22 + 1);
      if ( !v18 )
        v21 = (const void **)*v21;
      *((_BYTE *)v21 + v22) = v14;
      *((_BYTE *)v21 + v22 + 1) = 0;
    }
    if ( v3 > 3 )
    {
      v23 = *(const void ***)this;
      v24 = *(_QWORD *)(*(_QWORD *)this + 16LL);
      if ( v24 >= *(_QWORD *)(*(_QWORD *)this + 24LL) )
      {
        std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(v23, v24, v11, v9);
      }
      else
      {
        v18 = (unsigned __int64)v23[3] < 0x10;
        v23[2] = (const void *)(v24 + 1);
        if ( !v18 )
          v23 = (const void **)*v23;
        *((_BYTE *)v23 + v24) = v9;
        *((_BYTE *)v23 + v24 + 1) = 0;
      }
      if ( v3 > 4 )
      {
        v25 = *(const void ***)this;
        v26 = *(_QWORD *)(*(_QWORD *)this + 16LL);
        if ( v26 >= *(_QWORD *)(*(_QWORD *)this + 24LL) )
        {
          std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(v25, v26, v11, v5);
        }
        else
        {
          v18 = (unsigned __int64)v25[3] < 0x10;
          v25[2] = (const void *)(v26 + 1);
          if ( !v18 )
            v25 = (const void **)*v25;
          *((_BYTE *)v25 + v26) = v5;
          *((_BYTE *)v25 + v26 + 1) = 0;
        }
      }
    }
  }
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
}
