/*
 * XREFs of ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x180076AC0
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800751DC (_anonymous_namespace_--SendFramesReport.c)
 *     _anonymous_namespace_::ProcessAttributionResourceCountersEncoder::Serialize @ 0x18007601C (_anonymous_namespace_--ProcessAttributionResourceCountersEncoder--Serialize.c)
 *     _anonymous_namespace_::SequenceEncoder::AppendIndexSet @ 0x180076164 (_anonymous_namespace_--SequenceEncoder--AppendIndexSet.c)
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x180076268 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x180076B48 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     _anonymous_namespace_::GlobalResourceCountersEncoder::Serialize @ 0x1800F4130 (_anonymous_namespace_--GlobalResourceCountersEncoder--Serialize.c)
 * Callees:
 *     ?AppendByte@Base853Encoder@@QEAAXE@Z @ 0x180076214 (-AppendByte@Base853Encoder@@QEAAXE@Z.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x180076B48 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x180076BA4 (-EncodeBlock@Base853Encoder@@AEAAXXZ.c)
 */

void __fastcall Base853Encoder::AppendVarInt(Base853Encoder *this, unsigned int a2)
{
  unsigned int i; // edi
  int v4; // edx

  for ( i = a2; i != (i & 0x7F); i >>= 7 )
    Base853Encoder::AppendByte(this, i | 0x80);
  if ( i || *((_DWORD *)this + 3) )
  {
    Base853Encoder::EnsureZeroesAreSerialized(this);
    v4 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 2) |= (unsigned __int8)i << (8 * (3 - v4));
    *((_DWORD *)this + 3) = v4 + 1;
    if ( v4 == 3 )
      Base853Encoder::EncodeBlock(this);
  }
  else
  {
    ++*((_DWORD *)this + 4);
  }
}
