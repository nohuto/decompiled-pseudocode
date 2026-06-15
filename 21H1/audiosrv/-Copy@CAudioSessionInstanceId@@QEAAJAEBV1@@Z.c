/*
 * XREFs of ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180005F60
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x180005A20 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUI.c)
 * Callees:
 *     ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x180006054 (-Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z.c)
 *     ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x1800061C4 (-Copy@CAudioEndpointId@@QEAAJAEBV1@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002C1C0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     memcpy_s @ 0x180034A94 (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800BB57C (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAudioSessionInstanceId::Copy(
        CAudioSessionInstanceId *this,
        const struct CAudioSessionInstanceId *a2)
{
  _QWORD *v4; // r15
  char *v5; // r14
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rsi
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, __int64); // rcx
  _DWORD *v10; // r12
  __int64 v11; // rax

  if ( (int)CAudioEndpointId::Copy(this, a2) < 0
    || (*((_DWORD *)this + 14) = *((_DWORD *)a2 + 14),
        *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15),
        *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16),
        (int)CAppAudioSessionId::Copy(
               (CAudioSessionInstanceId *)((char *)this + 8),
               (const struct CAudioSessionInstanceId *)((char *)a2 + 8)) < 0) )
  {
    JUMPOUT(0x18007F5D5LL);
  }
  v4 = (_QWORD *)((char *)this + 72);
  v5 = (char *)*((_QWORD *)a2 + 9);
  v6 = (volatile signed __int32 *)(v5 - 24);
  v7 = (volatile signed __int32 *)(*((_QWORD *)this + 9) - 24LL);
  if ( v5 - 24 != (char *)v7 )
  {
    if ( *((int *)v7 + 4) >= 0 && *(_QWORD *)v6 == *(_QWORD *)v7 )
    {
      v8 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v6 + 32LL))(*(_QWORD *)v6);
      if ( *((int *)v6 + 4) >= 0 && v8 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v6 )
      {
        _InterlockedIncrement(v6 + 4);
      }
      else
      {
        v10 = v6 + 2;
        v11 = (**v8)(v8, *((unsigned int *)v6 + 2), 2LL);
        v6 = (volatile signed __int32 *)v11;
        if ( !v11 )
          ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
        *(_DWORD *)(v11 + 8) = *v10;
        memcpy_s((void *const)(v11 + 24), 2LL * (*v10 + 1), v5, 2LL * (*v10 + 1));
      }
      if ( _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v7 + 8LL))(*(_QWORD *)v7, v7);
      *v4 = v6 + 6;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(v4, v5, *((unsigned int *)v5 - 4));
    }
  }
  return 0LL;
}
