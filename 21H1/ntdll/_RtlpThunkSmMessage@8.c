/*
 * XREFs of _RtlpThunkSmMessage@8 @ 0x4B35AA42
 * Callers:
 *     _RtlSendMsgToSm@8 @ 0x4B35A940 (_RtlSendMsgToSm@8.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpThunkSmMessage(int a1, int a2)
{
  int v4; // eax
  int v5; // eax
  size_t v7; // [esp-4h] [ebp-Ch]

  switch ( *(_DWORD *)(a1 + 24) )
  {
    case 1:
      *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 36);
      break;
    case 3:
      *(_BYTE *)(a2 + 136) = *(_BYTE *)(a1 + 100);
      *(_DWORD *)(a2 + 32) = 104;
      *(_QWORD *)(a2 + 40) = *(int *)(a1 + 36);
      *(_QWORD *)(a2 + 48) = *(int *)(a1 + 40);
      *(_QWORD *)(a2 + 56) = *(int *)(a1 + 44);
      *(_QWORD *)(a2 + 64) = *(int *)(a1 + 48);
      *(_QWORD *)(a2 + 72) = *(int *)(a1 + 52);
      *(_DWORD *)(a2 + 80) = *(_DWORD *)(a1 + 56);
      v4 = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(a2 + 92) = 0;
      *(_DWORD *)(a2 + 88) = v4;
      v5 = *(_DWORD *)(a1 + 64);
      *(_DWORD *)(a2 + 100) = 0;
      *(_DWORD *)(a2 + 96) = v5;
      *(_DWORD *)(a2 + 104) = *(_DWORD *)(a1 + 68);
      *(_DWORD *)(a2 + 108) = *(_DWORD *)(a1 + 72);
      *(_DWORD *)(a2 + 112) = *(_DWORD *)(a1 + 76);
      *(_WORD *)(a2 + 116) = *(_WORD *)(a1 + 80);
      *(_WORD *)(a2 + 118) = *(_WORD *)(a1 + 82);
      *(_WORD *)(a2 + 120) = *(_WORD *)(a1 + 84);
      *(_BYTE *)(a2 + 122) = *(_BYTE *)(a1 + 86);
      *(_BYTE *)(a2 + 123) = *(_BYTE *)(a1 + 87);
      *(_DWORD *)(a2 + 124) = *(_DWORD *)(a1 + 88);
      *(_DWORD *)(a2 + 128) = *(_DWORD *)(a1 + 92);
      *(_DWORD *)(a2 + 132) = *(_DWORD *)(a1 + 96);
      break;
    case 4:
      *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 32);
      LODWORD(v7) = *(_DWORD *)(a1 + 32);
      memcpy((void *)(a2 + 36), (const void *)(a1 + 36), v7);
      break;
    case 5:
      *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 36);
      *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 32);
      LODWORD(v7) = *(_DWORD *)(a1 + 36);
      memcpy((void *)(a2 + 40), (const void *)(a1 + 40), v7);
      break;
    case 6:
      *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 32);
      break;
  }
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 24);
  return 0;
}
