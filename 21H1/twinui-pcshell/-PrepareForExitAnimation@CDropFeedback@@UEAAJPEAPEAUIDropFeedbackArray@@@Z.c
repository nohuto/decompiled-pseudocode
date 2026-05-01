/*
 * XREFs of ?PrepareForExitAnimation@CDropFeedback@@UEAAJPEAPEAUIDropFeedbackArray@@@Z @ 0x1803FF780
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropFeedback::PrepareForExitAnimation(CDropFeedback *this, struct IDropFeedbackArray **a2)
{
  unsigned int v2; // edi
  __int64 *v3; // rsi
  __int64 v5; // rcx
  unsigned int v7; // ebp
  __int64 v8; // rbx
  struct IDropFeedbackArray *v9; // rdx
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  v3 = (__int64 *)((char *)this + 104);
  *a2 = 0LL;
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 24LL))(v5, &v11);
    v7 = v11;
    while ( (--v7 & 0x80000000) == 0 )
    {
      v8 = *v3;
      v12 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 32LL))(
             v8,
             v7,
             &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810,
             &v12) >= 0
        && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 96LL))(v12) == 1
         || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 96LL))(v12) == 2
         || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 96LL))(v12) == 3
         || ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 104LL))(v12) & 0x80000) != 0) )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v3 + 48LL))(*v3, v7);
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14), v12);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    }
    v9 = (struct IDropFeedbackArray *)*v3;
    *v3 = 0LL;
    *a2 = v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v3);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v2;
}
