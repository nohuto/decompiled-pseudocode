/*
 * XREFs of HandleFullWindowDestruction @ 0x1C00715C0
 * Callers:
 *     <none>
 * Callees:
 *     HandleInputDestDestruction @ 0x1C007166C (HandleInputDestDestruction.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

__int64 __fastcall HandleFullWindowDestruction(__int64 a1)
{
  __int64 v2; // rax
  _OWORD v4[7]; // [rsp+20h] [rbp-89h] BYREF
  _OWORD v5[7]; // [rsp+90h] [rbp-19h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    LODWORD(v4[0]) = 4;
    *(_QWORD *)&v4[5] = a1;
    HIDWORD(v4[5]) = 2;
    HIDWORD(v4[6]) = *(_DWORD *)(*(_QWORD *)(v2 + 416) + 1088LL);
  }
  v5[0] = v4[0];
  v5[1] = v4[1];
  v5[2] = v4[2];
  v5[3] = v4[3];
  v5[4] = v4[4];
  v5[5] = v4[5];
  v5[6] = v4[6];
  return HandleInputDestDestruction((struct tagINPUTDEST *)v5);
}
