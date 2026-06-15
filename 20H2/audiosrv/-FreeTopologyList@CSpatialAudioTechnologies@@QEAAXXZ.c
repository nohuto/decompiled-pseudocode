/*
 * XREFs of ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x180126954
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x180061084 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ??1CSpatialProperties@@QEAA@XZ @ 0x18012569C (--1CSpatialProperties@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSpatialAudioTechnologies::FreeTopologyList(CSpatialAudioTechnologies *this)
{
  unsigned int v1; // ecx
  __int64 i; // rbx
  void (__fastcall ***v3)(_QWORD, __int64); // r8

  EnterCriticalSection(&stru_18019F778);
  if ( !--dword_18019F7A0 )
  {
    v1 = g_ListOfSpatialTech[0];
    for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
    {
      v3 = (void (__fastcall ***)(_QWORD, __int64))qword_18019F738[i];
      if ( v3 )
      {
        (**v3)(qword_18019F738[i], 1LL);
        v1 = g_ListOfSpatialTech[0];
      }
    }
    g_ListOfSpatialTech[0] = 0;
  }
  LeaveCriticalSection(&stru_18019F778);
}
