/*
 * XREFs of NtGdiCreateRoundRectRgn @ 0x1C012E070
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0090484 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C012E24C (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     ??0EBOX@@QEAA@AEAVERECTL@@H@Z @ 0x1C012E6F4 (--0EBOX@@QEAA@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRoundRectRgn(unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6)
{
  int v10; // r8d
  struct HOBJ__ *v11; // rbx
  struct HOBJ__ *v12; // rdi
  ULONG v14; // ecx
  struct OBJECT *v15; // [rsp+28h] [rbp-E0h] BYREF
  int v16; // [rsp+30h] [rbp-D8h]
  int v17; // [rsp+34h] [rbp-D4h]
  _QWORD v18[16]; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v19[20]; // [rsp+B8h] [rbp-50h] BYREF

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v18);
  v11 = 0LL;
  if ( !v18[1] )
  {
    v14 = 8;
LABEL_22:
    EngSetLastError(v14);
    goto LABEL_16;
  }
  v15 = (struct OBJECT *)__PAIR64__(a2, a1);
  v16 = a3;
  v17 = a4;
  if ( (((a1 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    v14 = 87;
    goto LABEL_22;
  }
  EBOX::EBOX((EBOX *)v19, (struct ERECTL *)&v15, v10);
  if ( v19[0] )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15);
    if ( v15 )
    {
LABEL_11:
      v12 = RGNOBJ::hrgnAssociate(&v15);
      if ( !v12 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
      goto LABEL_13;
    }
LABEL_19:
    EngSetLastError(8u);
    v12 = 0LL;
LABEL_13:
    if ( v16 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
    goto LABEL_15;
  }
  if ( (unsigned int)bRoundRect((struct EPATHOBJ *)v18, (struct EBOX *)v19, a5, a6)
    && EPATHOBJ::bFlatten((EPATHOBJ *)v18) )
  {
    v16 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v15, (struct EPATHOBJ *)v18, 1u, 0LL);
    if ( v15 )
    {
      RGNOBJ::vTighten((RGNOBJ *)&v15);
      goto LABEL_11;
    }
    goto LABEL_19;
  }
  EngSetLastError(8u);
  v12 = 0LL;
LABEL_15:
  v11 = v12;
LABEL_16:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v18);
  return v11;
}
