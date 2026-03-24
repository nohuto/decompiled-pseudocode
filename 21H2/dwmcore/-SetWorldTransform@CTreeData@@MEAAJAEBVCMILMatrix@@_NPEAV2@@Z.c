/*
 * XREFs of ?SetWorldTransform@CTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800CA250
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CTreeData::SetWorldTransform(
        CTreeData *this,
        const struct CMILMatrix *a2,
        char a3,
        struct CMILMatrix *a4)
{
  unsigned int v4; // esi
  __int64 v8; // rcx
  _OWORD *v9; // rax
  void *v10; // rcx

  v4 = 0;
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 88) = *((_OWORD *)a2 + 3);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 16);
  *((_BYTE *)this + 17) = a3;
  if ( a4 )
  {
    v8 = *((_QWORD *)this + 14);
    if ( v8 )
    {
      *(_OWORD *)v8 = *(_OWORD *)a4;
      *(_OWORD *)(v8 + 16) = *((_OWORD *)a4 + 1);
      *(_OWORD *)(v8 + 32) = *((_OWORD *)a4 + 2);
      *(_OWORD *)(v8 + 48) = *((_OWORD *)a4 + 3);
      *(_DWORD *)(v8 + 64) = *((_DWORD *)a4 + 16);
    }
    else
    {
      v9 = operator new(0x44uLL);
      v10 = v9;
      if ( v9 )
      {
        *v9 = *(_OWORD *)a4;
        v9[1] = *((_OWORD *)a4 + 1);
        v9[2] = *((_OWORD *)a4 + 2);
        v9[3] = *((_OWORD *)a4 + 3);
        *((_DWORD *)v9 + 16) = *((_DWORD *)a4 + 16);
      }
      else
      {
        v10 = 0LL;
      }
      if ( !v10 )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0x33u, 0LL);
        return v4;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 14, (signed __int64)v10, 0LL) )
        operator delete(v10);
    }
  }
  *((_QWORD *)this + 15) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 352LL);
  if ( *((_BYTE *)this + 276) )
    *((_QWORD *)this + 30) = 0LL;
  return v4;
}
