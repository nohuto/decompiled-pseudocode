/*
 * XREFs of ?xxxSPISetMinMetrics@@YGHPAU_UNICODE_STRING@@PAUtagMINIMIZEDMETRICS@@H@Z @ 0xD9E36
 * Callers:
 *     ?xxxSetSPIMetrics@@YGHPAU_UNICODE_STRING@@KPAXHPAH@Z @ 0xD9DEC (-xxxSetSPIMetrics@@YGHPAU_UNICODE_STRING@@KPAXHPAH@Z.c)
 * Callees:
 *     ?xxxSetAndDrawMinMetrics@@YGHPAU_UNICODE_STRING@@PAUtagMINIMIZEDMETRICS@@@Z @ 0xD9E9E (-xxxSetAndDrawMinMetrics@@YGHPAU_UNICODE_STRING@@PAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?SetWindowMetricInt@@YGHPAU_UNICODE_STRING@@GH@Z @ 0x1457A0 (-SetWindowMetricInt@@YGHPAU_UNICODE_STRING@@GH@Z.c)
 */

int __userpurge xxxSPISetMinMetrics@<eax>(
        INT *a1@<edx>,
        struct _UNICODE_STRING *a2,
        struct tagMINIMIZEDMETRICS *a3,
        int a4)
{
  struct _UNICODE_STRING **v4; // esi
  int v5; // ebx
  INT v6; // ecx
  INT v7; // eax
  int v8; // eax
  INT v10; // esi
  INT v11; // eax
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  INT v15; // [esp-4h] [ebp-1Ch]
  struct _UNICODE_STRING *v16; // [esp+0h] [ebp-18h]
  unsigned __int16 v17; // [esp+0h] [ebp-18h]
  unsigned __int16 v18; // [esp+0h] [ebp-18h]
  unsigned __int16 v19; // [esp+0h] [ebp-18h]
  struct tagMINIMIZEDMETRICS *v20; // [esp+4h] [ebp-14h]
  int v21; // [esp+4h] [ebp-14h]
  int v22; // [esp+4h] [ebp-14h]
  int v23; // [esp+4h] [ebp-14h]

  v4 = (struct _UNICODE_STRING **)a1;
  v5 = 0;
  v6 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process() + 160);
  v7 = *(unsigned __int16 *)(_gpsi + 6242);
  if ( (_WORD)v6 != (_WORD)v7 )
  {
    v10 = v6;
    a1[1] = EngMulDiv(a1[1], v7, v6);
    v11 = EngMulDiv(a1[2], *(unsigned __int16 *)(_gpsi + 6242), v10);
    v15 = v10;
    v4 = (struct _UNICODE_STRING **)a1;
    a1[2] = v11;
    a1[3] = EngMulDiv(a1[3], *(unsigned __int16 *)(_gpsi + 6242), v15);
  }
  if ( a2 )
  {
    v12 = SetWindowMetricInt(v4[1], (unsigned __int16)v16, (int)v20);
    v13 = SetWindowMetricInt(v4[2], v17, v21) & v12;
    v14 = SetWindowMetricInt(v4[3], v18, v22) & v13;
    v5 = SetWindowMetricInt(v4[4], v19, v23) & v14;
    v8 = v5;
  }
  else
  {
    v8 = 1;
  }
  if ( v8 )
    xxxSetAndDrawMinMetrics(v16, v20);
  return v5;
}
