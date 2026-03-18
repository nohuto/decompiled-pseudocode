/*
 * XREFs of ?Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z @ 0x1C0070E80
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00709D4 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C00D3880 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CMouseProcessor::CMouseQueue::Dequeue(
        CMouseProcessor::CMouseQueue *this,
        struct CMouseProcessor::RawMouseEvent *a2)
{
  __int16 v3; // cx
  char v4; // di
  char *v5; // rcx
  char *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v3 = *((_WORD *)this + 1345);
  if ( !v3 )
    return 0;
  v4 = 1;
  v5 = (char *)this + 168 * (((unsigned __int8)*((_WORD *)this + 1344) - (unsigned __int8)v3 + 1) & 0xF);
  *(_OWORD *)a2 = *(_OWORD *)v5;
  *((_OWORD *)a2 + 1) = *((_OWORD *)v5 + 1);
  *((_OWORD *)a2 + 2) = *((_OWORD *)v5 + 2);
  *((_OWORD *)a2 + 3) = *((_OWORD *)v5 + 3);
  *((_OWORD *)a2 + 4) = *((_OWORD *)v5 + 4);
  *((_OWORD *)a2 + 5) = *((_OWORD *)v5 + 5);
  *((_OWORD *)a2 + 6) = *((_OWORD *)v5 + 6);
  v6 = (char *)a2 + 128;
  *((_OWORD *)v6 - 1) = *((_OWORD *)v5 + 7);
  *(_OWORD *)v6 = *((_OWORD *)v5 + 8);
  *((_OWORD *)v6 + 1) = *((_OWORD *)v5 + 9);
  *((_QWORD *)v6 + 4) = *((_QWORD *)v5 + 20);
  memset(v5, 0, 0xA8uLL);
  if ( --*((_WORD *)this + 1345) >= 0x10u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  return v4;
}
