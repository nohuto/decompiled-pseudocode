/*
 * XREFs of ?ReleaseOutputDataPointer@CApoEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x14003D1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApoEndpoint::ReleaseOutputDataPointer(CApoEndpoint *this, const struct APO_CONNECTION_PROPERTY *a2)
{
  a2->u32Signature = 1094930482;
  a2[1].pBuffer = *((_QWORD *)this + 11);
  (*(void (__fastcall **)(_QWORD, _QWORD, const struct APO_CONNECTION_PROPERTY *))(**((_QWORD **)this + 6) + 24LL))(
    *((_QWORD *)this + 6),
    *((unsigned int *)this + 14),
    a2);
}
