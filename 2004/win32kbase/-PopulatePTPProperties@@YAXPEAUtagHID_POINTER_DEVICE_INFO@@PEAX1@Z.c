/*
 * XREFs of ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x1C016DB00
 * Callers:
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1C016DE50 (RIMPopulateExtendedPointerDeviceProperties.c)
 * Callees:
 *     ?ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z @ 0x1C000B330 (-ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PopulatePTPProperties(struct tagHID_POINTER_DEVICE_INFO *a1, void *a2, void *a3)
{
  int *v4; // rdi
  const unsigned __int16 **v6; // rsi
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edi
  int v14; // eax
  int v15; // r10d
  int v16; // esi
  int v17; // r11d
  int v18; // r9d
  int v19; // ecx
  int v20; // r14d
  int v21; // esi
  int v22; // ecx
  int v23; // ecx
  bool v24; // zf
  __int128 v25; // [rsp+30h] [rbp-79h]
  int v26; // [rsp+40h] [rbp-69h]
  char v27; // [rsp+44h] [rbp-65h] BYREF
  int v28; // [rsp+48h] [rbp-61h]
  char v29; // [rsp+4Ch] [rbp-5Dh]
  int v30; // [rsp+50h] [rbp-59h]
  char v31; // [rsp+54h] [rbp-55h]
  int v32; // [rsp+58h] [rbp-51h]
  unsigned int v33; // [rsp+60h] [rbp-49h]
  unsigned int v34; // [rsp+68h] [rbp-41h]
  int v35; // [rsp+70h] [rbp-39h]
  int v36; // [rsp+78h] [rbp-31h]
  int v37; // [rsp+80h] [rbp-29h]
  int v38; // [rsp+88h] [rbp-21h]
  int v39; // [rsp+90h] [rbp-19h]
  int v40; // [rsp+98h] [rbp-11h]
  int v41; // [rsp+A0h] [rbp-9h]
  int v42; // [rsp+A8h] [rbp-1h]
  char v43; // [rsp+ACh] [rbp+3h]
  int v44; // [rsp+B0h] [rbp+7h]
  char v45; // [rsp+B4h] [rbp+Bh]
  int v46; // [rsp+B8h] [rbp+Fh]

  v4 = (int *)&v27;
  v6 = (const unsigned __int16 **)&off_1C0245938;
  v8 = 16LL;
  do
  {
    *(_BYTE *)v4 = ReadDevicePropertyFromRegistry(*v6, a2, a3, *((_DWORD *)v6 - 1), v4 - 1);
    v4 += 2;
    v6 += 2;
    --v8;
  }
  while ( v8 );
  v13 = 0;
  if ( v27 && v29 && v31 )
  {
    *((_DWORD *)a1 + 68) = v26;
    *((_DWORD *)a1 + 69) = v28;
    *((_DWORD *)a1 + 70) = v30;
    v14 = v32;
  }
  else
  {
    v15 = *((_DWORD *)a1 + 37);
    v11 = v34;
    v25 = *(_OWORD *)((char *)a1 + 140);
    if ( v35 && v34 )
      v11 = -v34;
    v9 = v33;
    v17 = v33 + v37;
    if ( (int)v11 > (int)(v33 + v37) )
    {
      v15 = *(_QWORD *)((char *)a1 + 148);
      v18 = HIDWORD(*(_QWORD *)((char *)a1 + 140));
      v19 = *(_OWORD *)((char *)a1 + 140);
    }
    else
    {
      v18 = *((_DWORD *)a1 + 36);
      v9 = v18 - v33 + v36;
      v19 = *((_DWORD *)a1 + 35);
      if ( (int)v9 > v18 )
        v18 = v18 - v33 + v36;
      if ( *((_DWORD *)a1 + 37) / 2 - v17 - (int)v11 > v19 )
        v19 = *((_DWORD *)a1 + 37) / 2 - v17 - v11;
      v16 = *((_DWORD *)a1 + 37) / 2;
      if ( v17 - (int)v11 + v16 < v15 )
        v15 = v17 - v11 + v16;
    }
    v10 = (unsigned int)(v19 - *((_DWORD *)a1 + 35));
    *((_DWORD *)a1 + 68) = v10;
    v12 = (unsigned int)(v18 - *((_DWORD *)a1 + 36));
    *((_DWORD *)a1 + 69) = v12;
    *((_DWORD *)a1 + 70) = *((_DWORD *)a1 + 37) - v15;
    v14 = *((_DWORD *)a1 + 38) - HIDWORD(v25);
  }
  *((_DWORD *)a1 + 71) = v14;
  *((_DWORD *)a1 + 72) = v38;
  *((_DWORD *)a1 + 73) = v39;
  *((_DWORD *)a1 + 74) = v40;
  *((_DWORD *)a1 + 75) = v41;
  if ( v43 || v45 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
  v20 = v42;
  v21 = v44;
  if ( v42 != dword_1C0245A04 || v44 != dword_1C0245A14 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
  v22 = dword_1C0245A04;
  if ( (unsigned int)(v20 - 1) <= 0x63 )
    v22 = v20;
  *((_DWORD *)a1 + 76) = v22;
  v23 = dword_1C0245A14;
  if ( (unsigned int)(v21 - 1) <= 0x63 )
    v23 = v21;
  v24 = v46 == 0;
  *((_DWORD *)a1 + 77) = v23;
  LOBYTE(v13) = v24;
  *((_DWORD *)a1 + 67) = v13;
}
