/*
 * XREFs of ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C02A8BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C007092C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0071C3C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0071E78 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0071EF0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C007249C (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall UMPDDrvDitherColor(struct DHPDEV__ *a1, int a2, int a3, unsigned int *a4)
{
  UMPDOBJ *v8; // rbx
  __int64 v9; // rcx
  int v10; // ecx
  int v11; // ecx
  unsigned __int64 v12; // rdi
  char *KernelPtr; // rax
  size_t Size; // [rsp+20h] [rbp-88h]
  unsigned int v16; // [rsp+30h] [rbp-78h] BYREF
  UMPDOBJ *v17; // [rsp+38h] [rbp-70h] BYREF
  int v18; // [rsp+40h] [rbp-68h]
  _DWORD v19[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v20; // [rsp+50h] [rbp-58h]
  __int64 v21; // [rsp+58h] [rbp-50h]
  __int64 v22; // [rsp+60h] [rbp-48h]
  int v23; // [rsp+68h] [rbp-40h]
  int v24; // [rsp+6Ch] [rbp-3Ch]
  void *v25; // [rsp+70h] [rbp-38h]

  v20 = 0LL;
  v25 = 0LL;
  v16 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v17);
  v20 = 0LL;
  v25 = 0LL;
  v8 = v17;
  if ( !v17 )
    goto LABEL_14;
  v9 = *((_QWORD *)a1 + 225);
  v19[0] = 48;
  v19[1] = 13;
  v21 = *(_QWORD *)v17;
  v22 = v9;
  v23 = a2;
  v24 = a3;
  if ( a2 == 2 )
  {
    v10 = 1;
  }
  else
  {
    v10 = *((_DWORD *)a1 + 527);
    if ( (unsigned int)(v10 - 1) > 7 )
    {
      v11 = 0;
      goto LABEL_7;
    }
  }
  v11 = dword_1C02F94E0[v10 - 1];
LABEL_7:
  if ( !v11
    || (v12 = (((v11 * (unsigned int)*((unsigned __int16 *)a1 + 1056) + 31) >> 3) & 0x1FFFFFFC)
            * (unsigned __int64)*((unsigned __int16 *)a1 + 1057),
        v12 > 0xFFFFFFFF)
    || (v18 = v12, (v25 = UMPDOBJ::_AllocUserMem(v17, v12, 0)) == 0LL)
    || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v8, v19, 0x30u, &v16, Size) == -1) )
  {
LABEL_14:
    XUMPDOBJ::~XUMPDOBJ(&v17);
    return 0LL;
  }
  if ( v25 )
  {
    KernelPtr = UMPDOBJ::GetKernelPtr(v8, (char *)v25);
    memmove(a4, KernelPtr, (unsigned int)v12);
  }
  XUMPDOBJ::~XUMPDOBJ(&v17);
  return v16;
}
