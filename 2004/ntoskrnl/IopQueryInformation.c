/*
 * XREFs of IopQueryInformation @ 0x1406DABE0
 * Callers:
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 * Callees:
 *     FsRtlGetSupportedFeatures @ 0x1403300D0 (FsRtlGetSupportedFeatures.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     FsRtlQueryOpen @ 0x1405CFB60 (FsRtlQueryOpen.c)
 *     VfFastIoCheckState @ 0x1409C69A4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A7C (VfFastIoSnapState.c)
 */

__int64 __fastcall IopQueryInformation(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  void *v8; // r14
  _BYTE *v9; // rsi
  unsigned int v10; // r13d
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 (__fastcall *FastIoQueryOpen)(_QWORD, _QWORD, _QWORD); // r12
  __int64 result; // rax
  int Open; // eax
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0LL;
  v15 = 0;
  if ( !*(_BYTE *)(a1 + 208) )
  {
    v9 = a5;
    *a5 = 0;
    v10 = 0;
    FastIoDispatch = a2->DriverObject->FastIoDispatch;
    if ( FastIoDispatch )
    {
      if ( FastIoDispatch->SizeOfFastIoDispatch > 0xC0 )
      {
        FastIoQueryOpen = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryOpen;
        if ( FastIoQueryOpen )
        {
          --*(_BYTE *)(a3 + 67);
          *(_QWORD *)(a3 + 184) -= 72LL;
          *(_QWORD *)(a4 + 40) = a2;
          if ( (MmVerifierData & 0x10) != 0 )
            v8 = (void *)VfFastIoSnapState();
          *v9 = FastIoQueryOpen(a3, *(_QWORD *)(a1 + 104), a2);
          if ( v8 )
            VfFastIoCheckState(v8);
          *(_QWORD *)(a1 + 168) = *(_QWORD *)(a3 + 112);
          if ( *v9 )
          {
            *(_DWORD *)(a1 + 32) = -1096154543;
            if ( !*(_BYTE *)(a1 + 139) )
            {
              **(_QWORD **)(a1 + 96) = **(_QWORD **)(a1 + 104);
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL) = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL);
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 16LL) = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 16LL);
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 24LL);
              *(_DWORD *)(*(_QWORD *)(a1 + 96) + 32LL) = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 48LL);
            }
          }
          else
          {
            *(_QWORD *)(a3 + 184) += 72LL;
            ++*(_BYTE *)(a3 + 67);
          }
        }
      }
    }
    return v10;
  }
  result = FsRtlGetSupportedFeatures((__int64)a2, &v15);
  if ( (int)result >= 0 )
  {
    if ( (v15 & 4) == 0 )
    {
      *a5 = 0;
      return 0LL;
    }
    Open = FsRtlQueryOpen(a2, a3, *(_QWORD *)(a1 + 112), a1 + 204, *(_DWORD *)(a1 + 200));
    v10 = Open;
    *(_QWORD *)(a1 + 168) = *(_QWORD *)(a3 + 112);
    if ( Open < 0 )
    {
      if ( Open == -1071906812 )
      {
        v10 = 0;
        *a5 = 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 32) = -1096154543;
      *a5 = 1;
    }
    return v10;
  }
  return result;
}
