/*
 * XREFs of _anonymous_namespace_::GlobalResourceCountersEncoder::Serialize @ 0x1800F4130
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800751DC (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x180076AC0 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x180076B48 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x180076BA4 (-EncodeBlock@Base853Encoder@@AEAAXXZ.c)
 */

void __fastcall anonymous_namespace_::GlobalResourceCountersEncoder::Serialize(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // [rsp+20h] [rbp-20h] BYREF
  int v5; // [rsp+28h] [rbp-18h]
  int v6; // [rsp+2Ch] [rbp-14h]
  int v7; // [rsp+30h] [rbp-10h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v4 = a2;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v4, *a1);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v4, a1[1]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v4, a1[2]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v4, a1[3]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v4, a1[4]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v4, a1[5]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v4, a1[6]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v4, a1[7]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v4, a1[8]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v4, a1[9]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v4, a1[10]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v4, a1[11]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v4, a1[12]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v4, a1[13]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v4, a1[14]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v4, a1[15]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v4, a1[16]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v4, a1[17]);
  Base853Encoder::EnsureZeroesAreSerialized((Base853Encoder *)&v4, v3);
  if ( v6 )
    Base853Encoder::EncodeBlock((Base853Encoder *)&v4);
}
