/*
 * XREFs of NVMeControllerInitPart1 @ 0x1C000C62C
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0009230 (NVMeHwFindAdapter.c)
 *     NVMeControllerPowerUp @ 0x1C000CDB8 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000D088 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0016C10 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     AdminQueueInitialize @ 0x1C0009B18 (AdminQueueInitialize.c)
 *     ControllerEnable @ 0x1C0009DE4 (ControllerEnable.c)
 *     GetProcessorInformation @ 0x1C000A544 (GetProcessorInformation.c)
 *     NVMeControllerIdentify @ 0x1C0016AA8 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C0018E64 (NVMeNameSpaceIdentify.c)
 */

char __fastcall NVMeControllerInitPart1(__int64 a1, char a2)
{
  signed __int32 v4; // ecx
  const wchar_t *v5; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  signed __int32 v11[10]; // [rsp+0h] [rbp-78h] BYREF
  const wchar_t *v12; // [rsp+28h] [rbp-50h]
  int v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+38h] [rbp-40h]
  int v15; // [rsp+40h] [rbp-38h]
  __int64 v16; // [rsp+48h] [rbp-30h]
  int *v17; // [rsp+50h] [rbp-28h]
  int v18; // [rsp+88h] [rbp+10h] BYREF
  int v19; // [rsp+90h] [rbp+18h] BYREF
  int v20; // [rsp+98h] [rbp+20h] BYREF

  if ( a2 && !(unsigned __int8)AdminQueueInitialize() )
  {
    v18 = -1056964606;
    v17 = &v18;
    v4 = 7;
    v5 = L"Admin Queue Initialize failed";
LABEL_4:
    v16 = 0LL;
    v15 = 0;
    v14 = 0LL;
    v13 = 0;
    v12 = v5;
    v11[8] = v4;
    *(_DWORD *)(a1 + 28) = v4;
    StorPortNotification(4109LL, a1, 0LL);
    return 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 36LL) = (*(_WORD *)(a1 + 276) - 1) & 0xFFF | (((*(_WORD *)(a1 + 276) - 1) & 0xFFF) << 16);
  _InterlockedOr(v11, 0);
  v7 = *(_QWORD *)(a1 + 152);
  v8 = *(_QWORD *)(a1 + 432);
  *(_DWORD *)(v7 + 48) = v8;
  _InterlockedOr(v11, 0);
  *(_DWORD *)(v7 + 52) = HIDWORD(v8);
  _InterlockedOr(v11, 0);
  v9 = *(_QWORD *)(a1 + 152);
  v10 = *(_QWORD *)(a1 + 296);
  *(_DWORD *)(v9 + 40) = v10;
  _InterlockedOr(v11, 0);
  *(_DWORD *)(v9 + 44) = HIDWORD(v10);
  _InterlockedOr(v11, 0);
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 20LL) = 4587520;
  _InterlockedOr(v11, 0);
  StorPortStallExecution(5000LL);
  if ( !ControllerEnable(a1) )
  {
    v19 = -1056964606;
    v17 = &v19;
    v4 = 8;
    v5 = L"Controller enable failed";
    goto LABEL_4;
  }
  if ( a2 || (*(_DWORD *)(a1 + 24) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 24) &= ~0x20u;
    NVMeControllerIdentify(a1);
    if ( a2 )
      NVMeNameSpaceIdentify(a1);
  }
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 208) = 65537;
  }
  else if ( !GetProcessorInformation(a1) )
  {
    v20 = -1056964606;
    v17 = &v20;
    v4 = 10;
    v5 = L"Get processor information failed";
    goto LABEL_4;
  }
  return 1;
}
