/*
 * XREFs of ?GetMarshalSizeMax@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x18007BBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007BE0C (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::GetMarshalSizeMax(
        CWrlLightweightHandlerBase *this,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // r14
  const struct _GUID *v12; // rdx
  signed int StdMarshaler; // ebx
  unsigned int *v14; // rsi
  unsigned int v15; // edx
  unsigned int v16; // eax
  int v17; // edx
  void *v19[2]; // [rsp+40h] [rbp-38h] BYREF

  v7 = a7;
  v19[0] = 0LL;
  *a7 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v19);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v12, v19);
  if ( StdMarshaler >= 0 )
  {
    StdMarshaler = (*(__int64 (__fastcall **)(void *, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int **))(*(_QWORD *)v19[0] + 32LL))(
                     v19[0],
                     a2,
                     a3,
                     a4,
                     a5,
                     a6,
                     &a7);
    if ( StdMarshaler >= 0 )
    {
      v14 = (unsigned int *)((char *)this + 16);
      StdMarshaler = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *, const struct _GUID *, void *, _QWORD, void *, unsigned int, char *))(*(_QWORD *)this + 80LL))(
                       this,
                       a2,
                       a3,
                       a4,
                       a5,
                       a6,
                       (char *)this + 16);
      if ( StdMarshaler >= 0 )
      {
        v15 = *v14 + 4;
        if ( v15 < *v14 )
        {
          StdMarshaler = -2147024362;
        }
        else
        {
          v16 = v15 + (_DWORD)a7;
          v17 = -1;
          if ( v16 >= (unsigned int)a7 )
            v17 = v16;
          StdMarshaler = v16 < (unsigned int)a7 ? 0x80070216 : 0;
          *v7 = v17;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v19);
  return (unsigned int)StdMarshaler;
}
