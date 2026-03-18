/*
 * XREFs of NtUserSetCursorIconData @ 0x1C0096B60
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0095000 (HMValidateHandle.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0098A34 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     LeaveEditionCrit @ 0x1C0129280 (LeaveEditionCrit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetCursorIconData(unsigned __int64 a1, unsigned int *a2, ULONG64 a3, _BYTE *a4)
{
  __int64 v8; // rax
  struct tagCURSOR *v9; // r15
  unsigned int v10; // ebx
  __int64 v11; // rdx
  WCHAR *v12; // r9
  int v13; // esi
  WCHAR *v14; // r14
  ULONG64 v15; // r8
  unsigned __int64 *v16; // rcx
  unsigned __int64 v17; // rdx
  size_t Size; // [rsp+20h] [rbp-E8h]
  int v20; // [rsp+34h] [rbp-D4h]
  int v21; // [rsp+38h] [rbp-D0h]
  _BYTE v22[8]; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v23; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v24; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v25; // [rsp+70h] [rbp-98h] BYREF
  __int128 v26; // [rsp+80h] [rbp-88h]
  __int128 v27; // [rsp+90h] [rbp-78h]
  __int128 v28; // [rsp+A0h] [rbp-68h]
  __int128 v29; // [rsp+B0h] [rbp-58h]
  __int128 v30; // [rsp+C0h] [rbp-48h]
  __int128 v31; // [rsp+D0h] [rbp-38h]
  __int128 v32; // [rsp+E0h] [rbp-28h]
  __int64 v33; // [rsp+F0h] [rbp-18h]

  v24 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v22);
  v8 = HMValidateHandle(a1, 3u);
  v9 = (struct tagCURSOR *)v8;
  v10 = 0;
  if ( !v8 )
    goto LABEL_38;
  if ( (*(_DWORD *)(v8 + 80) & 0x800) == 0 )
  {
    UserSetLastError(0LL);
    goto LABEL_38;
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  v11 = *a2;
  v20 = *a2;
  *(_DWORD *)&v24.Length = *a2;
  v12 = (WCHAR *)*((_QWORD *)a2 + 1);
  v24.Buffer = v12;
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v13 = *(_DWORD *)a3;
  v21 = *(_DWORD *)a3;
  *(_DWORD *)&v23.Length = *(_DWORD *)a3;
  v14 = *(WCHAR **)(a3 + 8);
  v23.Buffer = v14;
  if ( ((unsigned __int8)v12 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (ULONG64)v12 + (unsigned __int16)v11 + 2;
  v16 = (unsigned __int64 *)MmUserProbeAddress;
  if ( v15 >= MmUserProbeAddress || (unsigned __int16)v11 > HIWORD(v20) )
    goto LABEL_14;
  if ( (v11 & 1) != 0 )
    goto LABEL_15;
  if ( v15 <= (unsigned __int64)v12 )
  {
LABEL_14:
    if ( (v11 & 1) == 0 )
    {
LABEL_16:
      *(_BYTE *)*v16 = 0;
      v16 = (unsigned __int64 *)MmUserProbeAddress;
      goto LABEL_17;
    }
LABEL_15:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v11, v15, v12);
    v16 = (unsigned __int64 *)MmUserProbeAddress;
    goto LABEL_16;
  }
LABEL_17:
  if ( ((unsigned __int64)v14 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v14 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (unsigned __int64)v14 + (unsigned __int16)v13 + 2;
    if ( v17 >= *v16 || (unsigned __int16)v13 > HIWORD(v21) )
      goto LABEL_24;
    if ( (v13 & 1) != 0 )
      goto LABEL_25;
    if ( v17 <= (unsigned __int64)v14 )
    {
LABEL_24:
      if ( (v13 & 1) == 0 )
      {
LABEL_26:
        *(_BYTE *)*v16 = 0;
        v16 = (unsigned __int64 *)MmUserProbeAddress;
        goto LABEL_27;
      }
LABEL_25:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v17, v15, v12);
      v16 = (unsigned __int64 *)MmUserProbeAddress;
      goto LABEL_26;
    }
  }
LABEL_27:
  if ( (unsigned __int64)a4 >= *v16 )
    a4 = (_BYTE *)*v16;
  v25 = *(_OWORD *)a4;
  v26 = *((_OWORD *)a4 + 1);
  v27 = *((_OWORD *)a4 + 2);
  v28 = *((_OWORD *)a4 + 3);
  v29 = *((_OWORD *)a4 + 4);
  v30 = *((_OWORD *)a4 + 5);
  v31 = *((_OWORD *)a4 + 6);
  v32 = *((_OWORD *)a4 + 7);
  v33 = *((_QWORD *)a4 + 16);
  if ( (DWORD2(v26) & 0xFFFFEFB0) != 0 )
  {
    UserSetLastError(1004LL);
    goto LABEL_38;
  }
  if ( (BYTE8(v26) & 8) == 0 )
  {
LABEL_37:
    ProbeForRead(*((volatile void **)&v31 + 1), v10, 4u);
    LODWORD(Size) = v10;
    v10 = _SetCursorIconData(v9, &v24, &v23, (struct tagCURSORDATA *)&v25, Size);
    goto LABEL_38;
  }
  if ( !(WORD1(v31) | WORD3(v31))
    && *((_QWORD *)&v32 + 1) == 8LL * (int)v31
    && (_QWORD)v32 == *((_QWORD *)&v32 + 1) + 4LL * SDWORD1(v31) )
  {
    v10 = 8 * (v31 + DWORD1(v31));
    goto LABEL_37;
  }
LABEL_38:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v22);
  LeaveEditionCrit();
  return (int)v10;
}
