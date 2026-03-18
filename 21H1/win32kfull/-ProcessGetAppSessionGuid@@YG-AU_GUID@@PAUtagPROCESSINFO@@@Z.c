/*
 * XREFs of ?ProcessGetAppSessionGuid@@YG?AU_GUID@@PAUtagPROCESSINFO@@@Z @ 0x1B3327
 * Callers:
 *     ?HandleIntObjUsageTelemetry@@YGXPAURawInputManagerDeviceObject@@PAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B2FF7 (-HandleIntObjUsageTelemetry@@YGXPAURawInputManagerDeviceObject@@PAUtagWND@@UtagINTERACTIVECTRL_I.c)
 * Callees:
 *     <none>
 */

struct _GUID *__userpurge ProcessGetAppSessionGuid@<eax>(
        int a1@<ecx>,
        struct _GUID *__return_ptr retstr,
        struct tagPROCESSINFO *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned __int16 v6; // ax
  struct _KPROCESS *v8; // [esp-4h] [ebp-8h]

  *(_DWORD *)retstr->Data4 = 0;
  *(_DWORD *)&retstr->Data4[4] = 0;
  v4 = *(_DWORD *)(a1 + 32);
  v5 = MEMORY[0xFFDF02C4];
  retstr->Data1 = v4;
  retstr->Data2 = _gSessionId;
  v6 = -1;
  if ( v5 <= 0xFFFF )
    v6 = v5;
  v8 = *(struct _KPROCESS **)a1;
  retstr->Data3 = v6;
  *(_QWORD *)retstr->Data4 = PsGetProcessCreateTimeQuadPart(v8);
  return retstr;
}
