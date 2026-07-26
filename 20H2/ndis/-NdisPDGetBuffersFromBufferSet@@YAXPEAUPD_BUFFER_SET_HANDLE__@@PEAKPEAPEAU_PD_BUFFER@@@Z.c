/*
 * XREFs of ?NdisPDGetBuffersFromBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@PEAKPEAPEAU_PD_BUFFER@@@Z @ 0x1C007CD30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 */

void __fastcall NdisPDGetBuffersFromBufferSet(
        struct PD_BUFFER_SET_HANDLE__ *a1,
        unsigned int *a2,
        struct _PD_BUFFER **a3)
{
  unsigned int v3; // esi
  struct _PD_BUFFER **p_NextPDBuffer; // rdi
  unsigned int v5; // r10d
  struct PD_BUFFER_SET_HANDLE__ *v7; // r9
  unsigned int v8; // eax
  struct _PD_BUFFER *v9; // rdx
  struct _PD_BUFFER *v10; // rax
  char v11[4]; // [rsp+30h] [rbp-18h]
  struct _PD_BUFFER *v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a2;
  p_NextPDBuffer = &v12;
  v5 = 0;
  v12 = 0LL;
  v7 = a1;
  while ( v7 )
  {
    if ( v5 >= v3 )
      break;
    v8 = *((_DWORD *)v7 + 13);
    if ( v8 >= *((_DWORD *)v7 + 12) )
    {
      v7 = (struct PD_BUFFER_SET_HANDLE__ *)*((_QWORD *)v7 + 8);
    }
    else
    {
      ++v5;
      v9 = *(struct _PD_BUFFER **)(*((_QWORD *)v7 + 7) + 8LL * v8);
      *p_NextPDBuffer = v9;
      p_NextPDBuffer = &v9->NextPDBuffer;
      ++*((_DWORD *)v7 + 13);
    }
  }
  *p_NextPDBuffer = 0LL;
  v10 = v12;
  *a2 = v5;
  *a3 = v10;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = *a2;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x52u,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      (char)a1,
      *(_DWORD *)v11);
  }
}
