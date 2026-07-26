/*
 * XREFs of ??0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ @ 0x1C01190F4
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C011A670 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 *     ?NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C011ADC0 (-NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU.c)
 * Callees:
 *     <none>
 */

NDIS_PD_QUEUE_TRACKER *__fastcall NDIS_PD_QUEUE_TRACKER::NDIS_PD_QUEUE_TRACKER(NDIS_PD_QUEUE_TRACKER *this)
{
  NDIS_PD_QUEUE_TRACKER *result; // rax

  *((_DWORD *)this + 19) = -1;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_WORD *)this + 30) = 0;
  *((_BYTE *)this + 62) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_BYTE *)this + 200) = 0;
  *((_DWORD *)this + 51) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_OWORD *)((char *)this + 168) = 0LL;
  *((_QWORD *)this + 27) = (char *)this + 208;
  *((_QWORD *)this + 26) = (char *)this + 208;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *(_QWORD *)((char *)this + 300) = 0LL;
  result = this;
  *(_OWORD *)((char *)this + 280) = 0LL;
  *((_WORD *)this + 141) = 0;
  *((_QWORD *)this + 36) = 0LL;
  return result;
}
