/*
 * XREFs of _lambda_fd9f27ac547b09c22332b2e0da28dd0d_::operator() @ 0x1C01DF1BC
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fd9f27ac547b09c22332b2e0da28dd0d___ @ 0x1C01DF144 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fd9f27ac547b09c22332b2e0da28dd0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_fd9f27ac547b09c22332b2e0da28dd0d_::operator()(__int64 *a1, _DWORD *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 result; // rax

  v3 = *(_QWORD *)(*a1 + 160);
  v4 = 0;
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 24);
  a2[2] = v4;
  a2[3] = *(_DWORD *)(*a1 + 168);
  a2[4] = *(_DWORD *)(*a1 + 172);
  result = *a1;
  a2[5] = *(_DWORD *)(*a1 + 176);
  return result;
}
