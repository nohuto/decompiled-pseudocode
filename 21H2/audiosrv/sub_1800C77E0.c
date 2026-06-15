/*
 * XREFs of sub_1800C77E0 @ 0x1800C77E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800C2584 @ 0x1800C2584 (sub_1800C2584.c)
 */

__int64 __fastcall sub_1800C77E0(__int64 a1, unsigned int a2, _DWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v4; // rbp
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-18h]

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 808);
  v4 = a2;
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 960) )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      v9 = v4;
      sub_1800C2584(
        *((_QWORD *)off_18019C348 + 2),
        0x16u,
        (__int64)&unk_18015DEF0,
        a1,
        v9,
        *(float *)(*(_QWORD *)(a1 + 968) + 4 * v4));
    }
    *a3 = *(_DWORD *)(*(_QWORD *)(a1 + 968) + 4 * v4);
  }
  else
  {
    v7 = -2147024809;
    sub_18005E8F8((__int64)"CAudioSession::GetChannelVolume", 1102, -2147024809);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v7;
}
