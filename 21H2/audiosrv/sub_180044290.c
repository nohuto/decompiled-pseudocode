/*
 * XREFs of sub_180044290 @ 0x180044290
 * Callers:
 *     sub_180044130 @ 0x180044130 (sub_180044130.c)
 *     sub_1800CF240 @ 0x1800CF240 (sub_1800CF240.c)
 *     sub_1800D0620 @ 0x1800D0620 (sub_1800D0620.c)
 *     sub_1800D07A0 @ 0x1800D07A0 (sub_1800D07A0.c)
 * Callees:
 *     sub_180044364 @ 0x180044364 (sub_180044364.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD820 @ 0x1800BD820 (sub_1800BD820.c)
 */

__int64 __fastcall sub_180044290(__int64 a1, unsigned int a2, char a3, int a4, _QWORD *a5)
{
  int v5; // edi
  _QWORD *v8; // rcx
  unsigned int v9; // eax
  int v10; // edi
  __int64 v11; // rsi
  __int64 v12; // rbx
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v14[0] = 0LL;
  v5 = a4;
  v8 = off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348 )
  {
    if ( (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0 && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 13LL, &unk_18015DFC8, a2);
      v8 = off_18019C348;
    }
    if ( v8 != &off_18019C348 && (*((_BYTE *)v8 + 28) & 0x40) != 0 && *((_BYTE *)v8 + 25) >= 4u )
      sub_1800BB524(v8[2], 14LL, &unk_18015DFC8, 0LL);
  }
  LOBYTE(a4) = a3;
  v9 = sub_180044364((_DWORD)v8, v5, a2, a4, (__int64)v14);
  v10 = v9;
  if ( v9 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 15LL, &unk_18015DFC8, v9);
    }
    v12 = v14[0];
    v11 = 0LL;
  }
  else
  {
    v11 = v14[0];
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BD820(*((_QWORD *)off_18019C348 + 2), 16, (unsigned int)&unk_18015DFC8, v14[0], 0LL);
    }
    v12 = 0LL;
  }
  *a5 = v11;
  if ( v10 < 0 )
    sub_18005E8F8("CAudioSessionManager::GetAudioSessionControl", 562LL, (unsigned int)v10);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v10;
}
