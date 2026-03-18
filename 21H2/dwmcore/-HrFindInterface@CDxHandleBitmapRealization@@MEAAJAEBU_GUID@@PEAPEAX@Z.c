/*
 * XREFs of ?HrFindInterface@CDxHandleBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFB30
 * Callers:
 *     ?HrFindInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A3AA0 (-HrFindInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DD000 (-HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::HrFindInterface(
        CDxHandleBitmapRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rax
  char *v7; // rax

  v3 = -2147024809;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
    if ( v4 )
    {
      v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c.Data1 )
        v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c.Data4;
      if ( v5 )
      {
        return (unsigned int)CBitmapRealization::HrFindInterface(this, a2, a3);
      }
      else
      {
        v3 = *((_BYTE *)this + 313) == 0 ? 0x80004002 : 0;
        *a3 = (void *)(((unsigned __int64)this + 360) & -(__int64)(*((_BYTE *)this + 313) != 0));
      }
    }
    else
    {
      if ( this )
        v7 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16;
      else
        v7 = 0LL;
      *a3 = v7;
      return 0;
    }
  }
  return v3;
}
