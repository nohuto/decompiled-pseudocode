/*
 * XREFs of ??4PhoneTopologyWorkItem@@QEAAAEBV0@AEBV0@@Z @ 0x18013FA48
 * Callers:
 *     ?GetNewestWorkItem@PhoneTopology@@AEAAHPEAVPhoneTopologyWorkItem@@@Z @ 0x180140CBC (-GetNewestWorkItem@PhoneTopology@@AEAAHPEAVPhoneTopologyWorkItem@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall PhoneTopologyWorkItem::operator=(_DWORD *a1, _DWORD *a2)
{
  _OWORD *v2; // r8
  _OWORD *v3; // rax
  __int64 v4; // rdx
  __int128 v5; // xmm1

  v2 = a1 + 6;
  a1[268] = a2[268];
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  a1[5] = a2[5];
  v3 = a2 + 6;
  v4 = 8LL;
  do
  {
    *v2 = *v3;
    v2[1] = v3[1];
    v2[2] = v3[2];
    v2[3] = v3[3];
    v2[4] = v3[4];
    v2[5] = v3[5];
    v2[6] = v3[6];
    v2 += 8;
    v5 = v3[7];
    v3 += 8;
    *(v2 - 1) = v5;
    --v4;
  }
  while ( v4 );
  *v2 = *v3;
  *((_QWORD *)v2 + 2) = *((_QWORD *)v3 + 2);
  return a1;
}
