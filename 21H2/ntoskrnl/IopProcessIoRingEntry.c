/*
 * XREFs of IopProcessIoRingEntry @ 0x140938A9C
 * Callers:
 *     NtSubmitIoRing @ 0x14055A160 (NtSubmitIoRing.c)
 * Callees:
 *     IopCompleteIoRingEntry @ 0x140559E1C (IopCompleteIoRingEntry.c)
 *     IopIoRingDispatchCancel @ 0x1409380B4 (IopIoRingDispatchCancel.c)
 *     IopIoRingDispatchRead @ 0x140938198 (IopIoRingDispatchRead.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x140938314 (IopIoRingDispatchRegisterBuffers.c)
 *     IopIoRingDispatchRegisterFiles @ 0x1409386B8 (IopIoRingDispatchRegisterFiles.c)
 */

LONG_PTR __fastcall IopProcessIoRingEntry(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int128 v6; // [rsp+20h] [rbp-10h] BYREF

  ++a1[14];
  if ( (*(_DWORD *)(a2 + 4) & 0xFFFFFFFC) != 0 )
  {
    *(_QWORD *)&v6 = 3225812993LL;
  }
  else if ( *(_DWORD *)a2 )
  {
    switch ( *(_DWORD *)a2 )
    {
      case 1:
        return IopIoRingDispatchRead(a1, a2);
      case 2:
        return IopIoRingDispatchRegisterFiles((__int64)a1, a2);
      case 3:
        return IopIoRingDispatchRegisterBuffers((__int64)a1, a2);
      case 4:
        return IopIoRingDispatchCancel((__int64)a1, a2, a3, a4);
    }
    *(_QWORD *)&v6 = 3221225474LL;
  }
  else
  {
    *(_QWORD *)&v6 = 0LL;
  }
  v5 = *(_QWORD *)(a2 + 48);
  *((_QWORD *)&v6 + 1) = 0LL;
  return IopCompleteIoRingEntry((__int64)a1, v5, &v6, 0);
}
