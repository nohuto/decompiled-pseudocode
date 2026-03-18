/*
 * XREFs of ?VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C002A454
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C0068340 (VidSchiCheckNodeTimeout.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0010CE0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00112BC (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

void __fastcall VidSchiCaptureRunningProcess(struct _VIDSCH_NODE *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  _BYTE *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rdx
  _BYTE *v8; // rcx
  __int64 v9; // r8
  char v10; // al
  _BYTE *v11; // rax
  _QWORD v12[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v13; // [rsp+40h] [rbp-18h]

  if ( (*((_DWORD *)a1 + 3) & 2) == 0 )
  {
    v2 = *((_QWORD *)a1 + 3);
    v13 = 0;
    v12[0] = v2 + 1712;
    AcquireSpinLock::Acquire((Acquire *)v12);
    v3 = *((unsigned int *)a1 + 388);
    if ( (_DWORD)v3 != *((_DWORD *)a1 + 386) )
    {
      v4 = *((_QWORD *)a1 + v3 + 195);
      if ( v4 )
      {
        v5 = (char *)a1 + 2028;
        v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 104) + 40LL) + 2640LL);
        if ( !v6 )
          goto LABEL_12;
        v7 = 15LL;
        v8 = v5;
        v9 = v6 - (_QWORD)v5;
        do
        {
          if ( v7 == -2147483631 )
            break;
          v10 = v8[v9];
          if ( !v10 )
            break;
          *v8++ = v10;
          --v7;
        }
        while ( v7 );
        v11 = v8 - 1;
        if ( v7 )
          v11 = v8;
        *v11 = 0;
        if ( !v7 )
LABEL_12:
          *v5 = 0;
      }
    }
    AcquireSpinLock::Release((AcquireSpinLock *)v12);
  }
}
