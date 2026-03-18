/*
 * XREFs of NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C001AC44
 * Callers:
 *     NVMeControllerPostPowerUp @ 0x1C0005120 (NVMeControllerPostPowerUp.c)
 *     NVMePowerSettingChangeNotification @ 0x1C000F1F0 (NVMePowerSettingChangeNotification.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     memset @ 0x1C0005500 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BBDC (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeSetNonOperationalPowerStatePermissiveMode(__int64 a1, char a2)
{
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( !*(_BYTE *)(a1 + 16) )
  {
    v3 = *(_DWORD *)(a1 + 24);
    if ( (v3 & 8) == 0 )
    {
      v4 = a2 & 1;
      if ( (v3 & 4) != 0 )
      {
        *(_DWORD *)(a1 + 3988) = (4 * v4) | *(_DWORD *)(a1 + 3988) & 0xFFFFFFFB | 2;
      }
      else
      {
        *(_BYTE *)(a1 + 835) = 0;
        memset(*(void **)(a1 + 920), 0, 0x10A0uLL);
        *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = 0LL;
        v5 = *(_QWORD *)(a1 + 920);
        *(_QWORD *)(a1 + 888) = v5;
        *(_DWORD *)(a1 + 824) = 1;
        *(_BYTE *)(v5 + 4253) |= 1u;
        *(_BYTE *)(*(_QWORD *)(a1 + 920) + 4253LL) &= ~2u;
        *(_WORD *)(*(_QWORD *)(a1 + 920) + 4244LL) = 0;
        v6 = *(_QWORD *)(a1 + 920);
        LODWORD(v5) = *(_DWORD *)(v6 + 4140);
        *(_BYTE *)(v6 + 4096) = 9;
        *(_BYTE *)(v6 + 4136) = 17;
        *(_DWORD *)(v6 + 4140) = v4 | v5 & 0xFFFFFFFE;
        *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4224LL) = NVMeSetNonOperationalPowerStatePermissiveModeCompletion;
        ProcessCommand(a1, a1 + 832);
        WaitForCommandCompleteWithCustomTimeout(a1);
      }
    }
  }
}
