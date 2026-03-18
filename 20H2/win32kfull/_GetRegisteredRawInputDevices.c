/*
 * XREFs of _GetRegisteredRawInputDevices @ 0x1C01D513C
 * Callers:
 *     NtUserGetRegisteredRawInputDevices @ 0x1C01FBCB0 (NtUserGetRegisteredRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z @ 0x1C01D4A90 (-SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z.c)
 */

__int64 __fastcall GetRegisteredRawInputDevices(struct tagRAWINPUTDEVICE *a1, unsigned int *a2, __int64 a3)
{
  unsigned int *v3; // rdi
  unsigned int v5; // ebx
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 CurrentProcessWin32Process; // r13
  _QWORD *v10; // rax
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  _QWORD *v13; // rcx
  _QWORD *k; // rax
  unsigned int *v15; // rax
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned int v20; // r9d
  __int64 *v21; // rdx
  __int64 v22; // r8
  int v23; // ecx
  int v24; // eax
  __int16 v25; // r10
  __int16 v26; // r11
  __int64 *v27; // rax
  __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  __int64 *v32; // rcx
  __int64 v33; // r8
  int v34; // eax
  int v35; // edx
  __int16 v36; // r11
  __int64 *v37; // rax
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 *v40; // r8
  __int64 v41; // rax
  __int128 v43; // [rsp+28h] [rbp-B0h]
  __int16 v44; // [rsp+72h] [rbp-66h]

  v3 = a2;
  v5 = 0;
  v6 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  v10 = *(_QWORD **)(CurrentProcessWin32Process + 832);
  if ( v10 )
  {
    for ( i = (_QWORD *)v10[2]; i != v10 + 2; i = (_QWORD *)*i )
      ++v6;
    v7 = (__int64)(v10 + 4);
    for ( j = (_QWORD *)v10[4]; j != (_QWORD *)v7; j = (_QWORD *)*j )
      ++v6;
    v13 = v10 + 6;
    for ( k = (_QWORD *)v10[6]; k != v13; k = (_QWORD *)*k )
      ++v6;
  }
  if ( a1 )
  {
    v15 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v15 = (unsigned int *)MmUserProbeAddress;
    v16 = *v15;
    if ( (_DWORD)v16 )
    {
      ProbeForWrite(a1, 16 * v16, 4u);
      v19 = *(_QWORD *)(CurrentProcessWin32Process + 832);
      if ( v19 )
      {
        if ( (unsigned int)v16 >= v6 )
        {
          v20 = 0;
          v21 = *(__int64 **)(v19 + 16);
          while ( 1 )
          {
            v22 = *(_QWORD *)(CurrentProcessWin32Process + 832);
            if ( v21 == (__int64 *)(v22 + 16) || v20 >= (unsigned int)v16 )
              break;
            v23 = 0;
            DWORD1(v43) = 0;
            v24 = *((_DWORD *)v21 + 5);
            if ( (v24 & 1) != 0 )
            {
              v23 = (v24 & 2) != 0 ? 4096 : 256;
              DWORD1(v43) = v23;
            }
            v25 = *((_WORD *)v21 + 8);
            v26 = *((_WORD *)v21 + 9);
            v27 = (__int64 *)v21[4];
            if ( v27 )
              v28 = *v27;
            else
              v28 = 0LL;
            *((_QWORD *)&v43 + 1) = v28;
            if ( v25 != 1 || (v29 = 1, v26 != 6) )
              v29 = 0;
            if ( v29 && (*(_DWORD *)(v22 + 100) & 0x20) != 0 )
              goto LABEL_42;
            if ( v25 != 1 || (v30 = 1, v26 != 2) )
              v30 = 0;
            if ( v30 && (*(_DWORD *)(v22 + 100) & 2) != 0 )
            {
LABEL_42:
              v23 |= 0x30u;
              DWORD1(v43) = v23;
            }
            if ( v25 != 1 )
              goto LABEL_48;
            if ( v26 == 6 && (*(_DWORD *)(v22 + 100) & 0x200) != 0 )
            {
              v23 |= 0x200u;
              DWORD1(v43) = v23;
            }
            v31 = 1;
            if ( v26 != 6 )
LABEL_48:
              v31 = 0;
            if ( v31 && (*(_DWORD *)(v22 + 100) & 0x400) != 0 )
            {
              v23 |= 0x400u;
              DWORD1(v43) = v23;
            }
            if ( v25 == 1 && v26 == 2 && (*(_DWORD *)(v22 + 100) & 0x100) != 0 )
              DWORD1(v43) = v23 | 0x200;
            LODWORD(v43) = *((_DWORD *)v21 + 4);
            *((_OWORD *)a1 + v20) = v43;
            v21 = (__int64 *)*v21;
            ++v20;
          }
          v32 = *(__int64 **)(v22 + 32);
          while ( 1 )
          {
            v33 = *(_QWORD *)(CurrentProcessWin32Process + 832);
            if ( v32 == (__int64 *)(v33 + 32) || v20 >= (unsigned int)v16 )
              break;
            v34 = *((_DWORD *)v32 + 5);
            if ( (v34 & 1) != 0 )
              v35 = (v34 & 2) != 0 ? 4128 : 288;
            else
              v35 = 32;
            v36 = *((_WORD *)v32 + 9);
            v37 = (__int64 *)v32[4];
            v38 = 0LL;
            if ( v37 )
              v38 = *v37;
            v39 = 2LL * v20;
            *((_WORD *)a1 + 4 * v39) = *((_WORD *)v32 + 8);
            *((_WORD *)a1 + 4 * v39 + 1) = v36;
            *((_DWORD *)a1 + 2 * v39 + 1) = v35;
            *((_QWORD *)a1 + v39 + 1) = v38;
            v32 = (__int64 *)*v32;
            ++v20;
          }
          v40 = *(__int64 **)(v33 + 48);
          while ( v40 != (__int64 *)(*(_QWORD *)(CurrentProcessWin32Process + 832) + 48LL) && v20 < (unsigned int)v16 )
          {
            v44 = *((_WORD *)v40 + 9);
            v41 = 2LL * v20;
            *((_WORD *)a1 + 4 * v41) = *((_WORD *)v40 + 8);
            *((_WORD *)a1 + 4 * v41 + 1) = v44;
            *((_DWORD *)a1 + 2 * v41 + 1) = 16;
            *((_QWORD *)a1 + v41 + 1) = 0LL;
            v40 = (__int64 *)*v40;
            ++v20;
          }
          SortRegisteredDevices(a1, v6);
          return v6;
        }
        else
        {
          if ( (unsigned __int64)v3 >= MmUserProbeAddress )
            v3 = (unsigned int *)MmUserProbeAddress;
          *v3 = v6;
          v5 = -1;
          UserSetLastError(122LL, v17, v18);
        }
      }
    }
    else
    {
      v5 = -1;
      UserSetLastError(87LL, v7, v8);
    }
  }
  else
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (unsigned int *)MmUserProbeAddress;
    *v3 = v6;
  }
  return v5;
}
