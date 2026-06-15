/*
 * XREFs of ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x1801275E4
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18006181C (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ??1CSpatialProperties@@QEAA@XZ @ 0x18012632C (--1CSpatialProperties@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSpatialAudioTechnologies::FreeTopologyList(CSpatialAudioTechnologies *this)
{
  unsigned int v1; // ecx
  __int64 i; // rbx
  void (__fastcall ***v3)(_QWORD, __int64); // r8

  EnterCriticalSection(&stru_1801A07E8);
  if ( !--dword_1801A0810 )
  {
    v1 = g_ListOfSpatialTech[0];
    for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
    {
      v3 = (void (__fastcall ***)(_QWORD, __int64))qword_1801A07A8[i];
      if ( v3 )
      {
        (**v3)(qword_1801A07A8[i], 1LL);
        v1 = g_ListOfSpatialTech[0];
      }
    }
    g_ListOfSpatialTech[0] = 0;
  }
  LeaveCriticalSection(&stru_1801A07E8);
}
