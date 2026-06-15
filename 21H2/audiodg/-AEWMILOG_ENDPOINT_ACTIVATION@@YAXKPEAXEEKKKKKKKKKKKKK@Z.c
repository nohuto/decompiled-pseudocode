/*
 * XREFs of ?AEWMILOG_ENDPOINT_ACTIVATION@@YAXKPEAXEEKKKKKKKKKKKKK@Z @ 0x1400410DC
 * Callers:
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x1400411C0 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 * Callees:
 *     memset_0 @ 0x14001DF48 (memset_0.c)
 */

void __fastcall AEWMILOG_ENDPOINT_ACTIVATION(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        unsigned int a15,
        unsigned int a16,
        unsigned int a17)
{
  _WORD v18[12]; // [rsp+20h] [rbp-79h] BYREF
  __int128 v19; // [rsp+38h] [rbp-61h]
  int v20; // [rsp+4Ch] [rbp-4Dh]
  void *v21; // [rsp+50h] [rbp-49h]
  int v22; // [rsp+58h] [rbp-41h]
  unsigned int v23; // [rsp+60h] [rbp-39h]
  unsigned int v24; // [rsp+64h] [rbp-35h]
  unsigned int v25; // [rsp+68h] [rbp-31h]
  unsigned int v26; // [rsp+6Ch] [rbp-2Dh]
  unsigned int v27; // [rsp+70h] [rbp-29h]
  unsigned int v28; // [rsp+74h] [rbp-25h]
  unsigned int v29; // [rsp+78h] [rbp-21h]
  unsigned int v30; // [rsp+7Ch] [rbp-1Dh]
  unsigned int v31; // [rsp+80h] [rbp-19h]
  unsigned int v32; // [rsp+84h] [rbp-15h]
  unsigned int v33; // [rsp+88h] [rbp-11h]
  unsigned int v34; // [rsp+8Ch] [rbp-Dh]
  unsigned int v35; // [rsp+90h] [rbp-9h]

  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset_0(v18, 0, 0x40uLL);
    v22 = 0;
    v18[0] = 120;
    v23 = a5;
    v24 = a6;
    v25 = a7;
    v26 = a8;
    v27 = a9;
    v28 = a10;
    v29 = a11;
    v30 = a12;
    v31 = a13;
    v32 = a14;
    v33 = a15;
    v34 = a16;
    v35 = a17;
    v20 = 0x20000;
    v19 = AEWMIGUID_ENDPOINT_ACTIVATION;
    v18[2] = 1025;
    v21 = a2;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v18);
  }
}
