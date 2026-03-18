/*
 * XREFs of NVMeControllerIdentify @ 0x1C0016AA8
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000C62C (NVMeControllerInitPart1.c)
 *     NVMeControllerIdentifyWorkItem @ 0x1C0012B90 (NVMeControllerIdentifyWorkItem.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     memset @ 0x1C0005500 (memset.c)
 *     IsIntelChatham @ 0x1C000912C (IsIntelChatham.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BBDC (WaitForCommandCompleteWithCustomTimeout.c)
 */

char __fastcall NVMeControllerIdentify(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rax
  char result; // al
  _DWORD *v6; // rbx

  *(_BYTE *)(a1 + 835) = 0;
  memset(*(void **)(a1 + 920), 0, 0x10A0uLL);
  v2 = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = 0LL;
  *(_QWORD *)(a1 + 888) = *(_QWORD *)(a1 + 920);
  *(_DWORD *)(a1 + 824) = 1;
  do
    *(_BYTE *)(*(_QWORD *)(a1 + 920) + 4253LL) |= ++v2;
  while ( v2 < 2 );
  *(_WORD *)(*(_QWORD *)(a1 + 920) + 4244LL) = 0;
  v3 = *(_QWORD *)(a1 + 920);
  v4 = *(_QWORD *)(a1 + 1616);
  *(_BYTE *)(v3 + 4096) = 6;
  *(_DWORD *)(v3 + 4100) = 0;
  *(_QWORD *)(v3 + 4120) = v4;
  *(_BYTE *)(v3 + 4136) = 1;
  ProcessCommand(a1, a1 + 832);
  WaitForCommandCompleteWithCustomTimeout(a1);
  result = IsIntelChatham(a1);
  if ( result )
  {
    v6 = *(_DWORD **)(a1 + 1608);
    if ( *(_WORD *)v6 != 0x8086 )
    {
      memset(v6, 0, 0x1000uLL);
      *((_BYTE *)v6 + 261) |= 1u;
      *((_QWORD *)v6 + 3) = 0x326D616874616843LL;
      result = 35;
      *(_WORD *)((char *)v6 + 73) = 1059;
      *v6 = 538017926;
      v6[1] = 842084402;
      *((_BYTE *)v6 + 64) = 48;
      *((_BYTE *)v6 + 72) = 1;
      *((_BYTE *)v6 + 259) = 3;
      *((_WORD *)v6 + 256) = 17510;
      v6[129] = 1;
    }
  }
  return result;
}
