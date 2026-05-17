/*
 * XREFs of _RtlWow64GetProcessMachines@12 @ 0x4B2DBD70
 * Callers:
 *     _RtlQueryPerformanceCounter@4 @ 0x4B2DBC20 (_RtlQueryPerformanceCounter@4.c)
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 *     ReadTimeStampCounterFromEmulator @ 0x4B344841 (ReadTimeStampCounterFromEmulator.c)
 * Callees:
 *     _ZwQuerySystemInformationEx@24 @ 0x4B2F3F90 (_ZwQuerySystemInformationEx@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __alloca_probe_16 @ 0x4B2F6500 (__alloca_probe_16.c)
 */

int __stdcall RtlWow64GetProcessMachines(int a1, _WORD *a2, __int16 *a3)
{
  _WORD *v3; // ebx
  __int16 *v4; // edi
  int v5; // esi
  struct _TEB *v6; // eax
  int WowTebOffset; // ecx
  _WORD *v8; // eax
  __int16 v9; // cx
  __int16 v10; // ax
  __int16 v11; // dx
  __int16 v12; // cx
  int result; // eax
  void *v14; // esp
  int v15; // ebx
  int v16; // esi
  _BYTE *v17; // edi
  _BYTE v18[12]; // [esp+0h] [ebp-3Ch] BYREF
  _WORD *v19; // [esp+Ch] [ebp-30h]
  __int16 *v20; // [esp+10h] [ebp-2Ch]
  int v21; // [esp+14h] [ebp-28h]
  int v22; // [esp+18h] [ebp-24h] BYREF
  int v23; // [esp+1Ch] [ebp-20h]
  int v24; // [esp+20h] [ebp-1Ch] BYREF
  _BYTE *v25; // [esp+24h] [ebp-18h]
  _BYTE v26[16]; // [esp+28h] [ebp-14h] BYREF

  v3 = a2;
  v4 = a3;
  v5 = 0;
  v22 = a1;
  v19 = a2;
  v20 = a3;
  if ( a1 == -1 )
  {
    if ( !NtCurrentTeb()->WowTebOffset )
    {
      v11 = 0;
      v12 = 332;
      goto LABEL_11;
    }
    v6 = NtCurrentTeb();
    WowTebOffset = v6->WowTebOffset;
    if ( WowTebOffset < 0 )
      v6 = (struct _TEB *)((char *)v6 + WowTebOffset);
    if ( v6 == (struct _TEB *)v6->NtTib.Self )
      v8 = v6->TlsSlots[10];
    else
      v8 = (_WORD *)v6[1].GdiTebBatch.Buffer[189];
    if ( v8 )
    {
      v9 = v8[17];
      if ( v9 )
      {
        v10 = v8[16];
        if ( v10 )
        {
          v11 = v9;
          v12 = v10;
          goto LABEL_11;
        }
      }
    }
  }
  v24 = 16;
  v25 = v26;
  v5 = ZwQuerySystemInformationEx(181, &v22, 4, v26, 16, &v24);
  v21 = v5;
  if ( v5 == -1073741789 )
  {
    v14 = alloca(v24);
    v25 = v18;
    v5 = ZwQuerySystemInformationEx(181, &v22, 4, v18, v24, &v24);
    v21 = v5;
  }
  if ( v5 < 0 )
    return v5;
  v11 = 0;
  v12 = 0;
  v23 = *(_DWORD *)v25;
  if ( (_WORD)v23 )
  {
    v15 = v23;
    v16 = 0;
    v17 = v25;
    do
    {
      v23 = (unsigned __int16)v15;
      v25 = (_BYTE *)(unsigned __int16)v15;
      if ( (v15 & 0xC0000) == 0x80000 )
        v11 = v23;
      if ( (v15 & 0x40000) != 0 )
        v12 = (__int16)v25;
      v15 = *(_DWORD *)&v17[4 * v16++ + 4];
    }
    while ( (_WORD)v15 );
    v4 = v20;
    v5 = v21;
    v3 = v19;
  }
LABEL_11:
  *v3 = v11;
  result = v5;
  if ( v4 )
    *v4 = v12;
  return result;
}
