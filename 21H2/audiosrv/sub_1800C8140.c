/*
 * XREFs of sub_1800C8140 @ 0x1800C8140
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800C2540 @ 0x1800C2540 (sub_1800C2540.c)
 *     sub_1800D1F10 @ 0x1800D1F10 (sub_1800D1F10.c)
 */

__int64 __fastcall sub_1800C8140(__int64 a1, float *a2)
{
  float v3; // xmm6_4
  unsigned int v5; // ebx
  unsigned __int64 i; // rdi
  float v8; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0.0;
  v5 = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 5u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x1Au, (__int64)&unk_18015DEF0, 0LL);
  }
  if ( a2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
    for ( i = 0LL; i < *(_QWORD *)(a1 + 104); ++i )
    {
      if ( (int)sub_1800D1F10(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * i), &v8) >= 0 )
        v3 = fmaxf(v8, v3);
    }
    if ( a1 != -48 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 5u )
    {
      sub_1800C2540(*((_QWORD *)off_18019C348 + 2), 0x1Bu, (__int64)&unk_18015DEF0, v3);
    }
    *a2 = v3;
  }
  else
  {
    v5 = -2147467261;
    sub_18005E8F8((__int64)"CAudioSession::GetPeakValue", 1353, -2147467261);
  }
  return v5;
}
