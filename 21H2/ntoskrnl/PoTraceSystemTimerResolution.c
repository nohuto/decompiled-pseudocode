/*
 * XREFs of PoTraceSystemTimerResolution @ 0x1406B3C14
 * Callers:
 *     ExTraceTimerResolution @ 0x140672724 (ExTraceTimerResolution.c)
 *     NtSetTimerResolution @ 0x1406B3A00 (NtSetTimerResolution.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall PoTraceSystemTimerResolution(char a1, __int64 a2)
{
  __int64 v4; // rax
  bool v5; // r8
  REGHANDLE v6; // rbx
  unsigned __int16 *v7; // r8
  struct _KTHREAD *CurrentThread; // rdx
  _DWORD *Teb; // rdx
  unsigned __int64 v10; // rcx
  __int16 v11; // ax
  int v12; // eax
  int v13; // ecx
  ULONG v14; // r9d
  const EVENT_DESCRIPTOR *v15; // rdx
  int *v16; // r8
  __int16 v18; // [rsp+30h] [rbp-98h] BYREF
  int v19; // [rsp+34h] [rbp-94h] BYREF
  int v20; // [rsp+38h] [rbp-90h] BYREF
  int v21; // [rsp+3Ch] [rbp-8Ch] BYREF
  int v22; // [rsp+40h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-78h] BYREF
  int *v24; // [rsp+60h] [rbp-68h]
  int v25; // [rsp+68h] [rbp-60h]
  int v26; // [rsp+6Ch] [rbp-5Ch]
  __int16 *v27; // [rsp+70h] [rbp-58h]
  int v28; // [rsp+78h] [rbp-50h]
  int v29; // [rsp+7Ch] [rbp-4Ch]
  __int64 v30; // [rsp+80h] [rbp-48h]
  int v31; // [rsp+88h] [rbp-40h]
  int v32; // [rsp+8Ch] [rbp-3Ch]
  int *v33; // [rsp+90h] [rbp-38h]
  int v34; // [rsp+98h] [rbp-30h]
  int v35; // [rsp+9Ch] [rbp-2Ch]
  _DWORD *v36; // [rsp+A0h] [rbp-28h]
  int v37; // [rsp+A8h] [rbp-20h]
  int v38; // [rsp+ACh] [rbp-1Ch]

  if ( a1 )
  {
    v6 = PopDiagHandle;
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_REQUEST_RUNDOWN);
    v5 = 1;
    if ( !(_BYTE)v4 )
    {
      LOBYTE(v4) = EtwEventEnabled(v6, &POP_ETW_EVENT_TIME_RESOLUTION_STACK_RUNDOWN);
      if ( !(_BYTE)v4 )
        v5 = 0;
    }
  }
  else
  {
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STRS);
    v5 = v4;
  }
  if ( PopDiagHandleRegistered && v5 )
  {
    v7 = *(unsigned __int16 **)(a2 + 1472);
    v18 = *v7 >> 1;
    v20 = *(_DWORD *)(a2 + 2104);
    v19 = 0;
    if ( !a1 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
        Teb = 0LL;
      else
        Teb = CurrentThread->Teb;
      if ( Teb )
      {
        if ( KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10]
          && (v10 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10]) != 0
          && ((v11 = *(_WORD *)(v10 + 8), v11 == 332) || v11 == 452) )
        {
          v12 = Teb[3032];
        }
        else
        {
          v12 = Teb[1480];
        }
        v19 = v12;
      }
    }
    v21 = *(_DWORD *)(a2 + 1088);
    UserData.Ptr = (ULONGLONG)&v20;
    UserData.Size = 4;
    UserData.Reserved = 0;
    v24 = &v21;
    v25 = 4;
    v26 = 0;
    v27 = &v18;
    v28 = 2;
    v29 = 0;
    v13 = *v7;
    v4 = *((_QWORD *)v7 + 1);
    v30 = v4;
    v31 = v13;
    v32 = 0;
    if ( a1 )
    {
      if ( (*(_DWORD *)(a2 + 1124) & 0x1000) != 0 )
        LOBYTE(v4) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_REQUEST_RUNDOWN, 0LL, 4u, &UserData);
      v16 = *(int **)(a2 + 2096);
      if ( !v16 || !*v16 )
        return v4;
      v20 = *(_DWORD *)(a2 + 2108);
      v22 = *v16;
      v33 = &v22;
      v36 = v16 + 2;
      v37 = 8 * v22;
      v38 = 0;
      v14 = 6;
      v15 = &POP_ETW_EVENT_TIME_RESOLUTION_STACK_RUNDOWN;
    }
    else
    {
      v33 = &v19;
      v14 = 5;
      v15 = &POP_ETW_EVENT_STRS;
    }
    v34 = 4;
    v35 = 0;
    LOBYTE(v4) = EtwWrite(PopDiagHandle, v15, 0LL, v14, &UserData);
  }
  return v4;
}
